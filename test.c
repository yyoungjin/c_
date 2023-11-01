#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>

int main()
{
    typedef struct node
    {
        int number;
        struct node *p_next;
    } NODE;

    // 1. NODE 자료형을 가리키는 헤드포인트 선언
    NODE *p_head = NULL;

    // 2. 헤드포인트에 주소 할당, 첫번째 노드의 number에 12 저장, 첫번째 노드의 포인터에 NULL저장
    p_head = (NODE *)malloc(sizeof(NODE));
    p_head->number = 12;
    p_head->p_next = NULL;

    // 3. 첫 번째 노드의 포인터에 다음 노드 메모리 할당, 두 번째 노드 number에 15 할당
    p_head->p_next = (NODE *)malloc(sizeof(NODE));
    p_head->p_next->number = 15;
    p_head->p_next->p_next = NULL;
    return 0;
} 