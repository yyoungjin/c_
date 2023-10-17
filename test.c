#include <stdio.h>
#include <string.h>
int GetData(void *p_data)
{
    *(short *)p_data = 0x0412;
}


void main()
{
    int data = 0x12345678;
    GetData(&data);
    printf("%X\n", data);
}