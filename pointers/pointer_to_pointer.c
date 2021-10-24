#include <stdio.h>
void main()
{
    int a;
    int *ptr;
    int **pptr;
    int *s;
    a = 10;
    ptr = &a;
    pptr = &ptr;
    printf("ptr: %d\n", *ptr);
    printf("pptr: %d\n", **pptr);
    printf("&a   : %p\n", &a);
    printf("&ptr : %p\n", ptr);
    printf("&pptr: %p\n", *pptr);
    printf("&pptr: %p\n", &**pptr);
    printf("a == **pptr:=> %d\n", a == **pptr);
    printf("&a == &**pptr:=> %d\n", &a == &**pptr);
    printf("%p\n", s);
}