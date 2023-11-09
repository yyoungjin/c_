#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>

int main(void)
{
    int n, i, res = 0;
    do {
        printf("n을 입력하세요 : "); scanf("%d", &n);
    } while(n<=0);

    for(i=1;i<=n;i++) {
        res += i;
    }
    printf("%d\n", res);
    return 0;
} 