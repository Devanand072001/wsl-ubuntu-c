#include <stdio.h>

void main()
{
    int a;
    int *ip;
    a = 10;
    ip = &a;
    printf("%p ", ip);
    printf("%p ", &a);
    printf("%d\n", *ip);
    // int *p1 = a;// invalid statement
    // printf("int *p1 = a %d ", *p1);
    // simarly
    int b = 20;
    int *ip2 = &b;
    printf("%p ", ip2);
    printf("%p ", &b);
    printf("%d\n", *ip2);
}