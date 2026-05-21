#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url)
{
    char prefix[255] = "http://www.";
    strcpy(index_url, strcat(prefix, domain));
}

int main(void)
{
    char *domain = "knking.com";
    char index_url[255] = "";
    build_index_url(domain, index_url);
    puts(index_url);
}
