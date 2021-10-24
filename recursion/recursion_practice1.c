#include <stdio.h>
void abc()
{
    auto int l;
    static int s;
    l = ++s;
    printf("%d %d\n", l, s);
    if (l <= 2)
    {
        abc();
    }
    printf("%d %d \n", l, s);
    
}
void main(){
    abc();
    abc();
}