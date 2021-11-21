#include <stdio.h>
 struct node
{
    int data;
    struct node *next;
};
void main()
{
    struct node n1, n2, n3, n4;
    n1.data = 10;
    n2.data = 20;
    n3.data = 30;
    n4.data = 40;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;
    printf("%d \t %p\n", n1.data, &n1);
    printf("%d \t %p\n", n1.next->data, n1.next);
    printf("%d \t %p\n", n1.next->next->data, n1.next->next);
    printf("%d \t %p\n", n1.next->next->next->data, n1.next->next->next);
    // printf("%d \t %p\n", n1.next->next->next->next->next->data, n1.next->next->next->next);
}