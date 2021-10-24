#include <stdio.h>
int g;
void test()
{
    auto l;
    static s;
    l = ++s;
    ++g;
    printf("%d %d %d\n", l, s, g);
    if (l <= 2)
        test();
    printf("%d %d %d\n", l, s, g);
}
void abc()
{
    auto al;
    static as;
    al = ++as;
    ++g;
    printf("%d %d %d\n", al, as, g);
    test();
    if (al <= 2)
        abc();
    printf("%d %d %d\n", al, as, g);
}
void main()
{
    abc();
}