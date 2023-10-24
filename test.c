#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>

int main()
{
    char *p_name;
    p_name = (char *)malloc(32);
    if (p_name != NULL) {
        printf("your name : ");
        gets(p_name);
        printf("Hi~ %s\n", p_name);
        free(p_name);
    } else {
        printf("Memory allocation error!");
    }
    return 0;
} 