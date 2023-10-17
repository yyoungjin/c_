#include <stdio.h>
#include <string.h>
int Array(char string[ ])
{
    int count = 0, num = 0;
    while(string[count] != 0) {
        num = num * 10 + string[count] - '0';
        count++;
    }
    return num;
}

int main()
{
    int first_num, res = 0, tmp;
    char first_string[5], second_string[101];

    gets(first_string);
    gets(second_string);

    first_num = Array(first_string);

    for (int i = 0; i < first_num; i++) {
        tmp = second_string[i] - '0';
        res += tmp;
    }
    printf("%d", res);
    return 0;
}