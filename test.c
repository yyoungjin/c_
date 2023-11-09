#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>

int main(void)
{
    int n;
    do {
        printf("두 자리 수를 입력하세요 : "); scanf("%d", &n);
    } while(n<10 || n>99);

    printf("%d\n", n);
} 