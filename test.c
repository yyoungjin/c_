#include <stdio.h>
#include <string.h>

int GetMyString(char buffer[ ], int limit)
{
    int i;
    for(i = 0; i<limit; i++) {
        buffer[i] = getchar();
        if(buffer[i] == '\n') {
            buffer[i] = 0;
            return 1;
        }
    }
    buffer[i] = 0;
    rewind(stdin);
    return 0;
}ㅡ

void main()
{
    char temp[10];
    int state;
    state = GetMyString(temp, 9);

    if(state == 1) printf("input : %s\n", temp);
    else printf("input : %s -> out of range\n", temp);
}