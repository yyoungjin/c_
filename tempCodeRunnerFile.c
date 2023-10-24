#include <stdio.h>
#include <string.h>

int main()
{
    int n, count = 1;
    scanf("%d", &n);
    while (n >= count) {
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        printf("Case #%d: %d\n", count, num1+num2);
        count++;
    }
    return 1
}