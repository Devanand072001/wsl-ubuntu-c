#include <stdio.h>
void main()
{
    int a = 10, b = 20;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("p1 < p2 %d\n", p1 < p2);
    printf("%d\n", p1 < p2);
    printf("%p %p\n", &a, &b);
    printf("%ld\n", p2 - p1);
    printf("%p\n", p2 + 1);
}