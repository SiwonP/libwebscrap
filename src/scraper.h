#ifndef SCRAPPER_H
#define SCRAPPER_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <string.h>
#include <regex.h>

char *retrieve_html(CURL *curlHandle, char *url);

int scrap_title(char *buffer, int *index);

#endif
