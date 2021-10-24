#include <stdio.h>
void main(){
    int a = 511, b = 10;
    char *cp; 
    cp = &a;
    printf("%lu\n", *cp );
}