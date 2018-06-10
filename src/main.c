#include "scraper.h"

int main(int argc, char *argv[])
{
    CURL *handle;
    char *working_buffer;
    working_buffer = retrieve_html(handle, argv[1]);
    int index[] = {0,0};
    int res = scrap_title(working_buffer,index);

    return 1;
}
