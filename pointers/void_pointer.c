#include <stdio.h>
void main(){
    int a = 10;
    float b = 3.14;
    void *vp;
    vp = &a;
    printf("%d\n", * (int *)vp) ;
    vp = &b;
    printf("%f\n", * (float *)vp) ;
}