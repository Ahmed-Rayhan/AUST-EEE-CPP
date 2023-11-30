#include<iostream>
using namespace std;

char* my_strncpy(char* d, const char* source, unsigned int n)
{

    if ((d == NULL) &&(source == NULL))
        return NULL;

    char* start = d;

    while (*source && n--)
    {
        *d = *source;
        d++;
        source++;
    }

    *d = '\0';
    return start;
}
int main()
{
    char source[] = "AUST-EEE-45";

    char d[16] = {0};

    my_strncpy(d, source, 20);
    printf("Copied string: %s\n", d);
    return 0;
}
