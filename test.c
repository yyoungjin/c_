#include <stdio.h>
#include <string.h>

void MyFunc(void *p, char flag)
{
    if (flag == 0) *(char *)p = 1;
    else if (flag == 1) *(short *)p = 1;
    else *(int *)p = 1;
}

void main()
{
    short data = 5;
    MyFunc(&data, 1);
    printf("%d\n", data);
}