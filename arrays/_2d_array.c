#include <stdio.h>
void main()
{
    int a[3][5] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130};
    printf("%p\n", a);
    printf("%p\n", &*(a[2]) );
    printf("%p\n", *a + 1);
    printf("%d\n", **a);
}
