#include "scraper.h"

char *buffer;
size_t lr = 0;

int scraper(char *url)
{

    return 1;
}

size_t curl_callback(char *ptr, size_t size, size_t nmemb, void *userdata)
{
    size_t real_size = size * nmemb;
    buffer = realloc(buffer, lr+real_size+1);
    memcpy(&(buffer[lr]), ptr, real_size);
    lr += real_size;

    return real_size;
}

char *retrieve_html(CURL *curlHandle, char *url)
{
    curlHandle = curl_easy_init();
    curl_easy_setopt(curlHandle, CURLOPT_URL, url);
    curl_easy_setopt(curlHandle, CURLOPT_FOLLOWLOCATION, 1);
    curl_easy_setopt(curlHandle, CURLOPT_WRITEFUNCTION, curl_callback);
    curl_easy_setopt(curlHandle, CURLOPT_WRITEDATA, buffer);
    int success = curl_easy_perform(curlHandle);
    curl_easy_cleanup(curlHandle);

    char *working_buffer;
    working_buffer = calloc(lr+1, sizeof(char));
    strcpy(working_buffer, buffer);

    free(buffer);

    buffer = calloc(1, sizeof(char));
    return working_buffer;
}

int scrap_title(char *buffer, int *index)
{
    int i;
    regex_t title;
    regmatch_t title_match;
    char title_regex[] = 
        "<title>.+</title>";

    regcomp(&title, title_regex, REG_EXTENDED|REG_NEWLINE);
    regexec(&title, buffer, 1, &title_match, 0);

    for (i = title_match.rm_so; i < title_match.rm_eo; i++) {
        printf("%c", buffer[i]);
    }
    printf("\n"); 

    return 1;
}
