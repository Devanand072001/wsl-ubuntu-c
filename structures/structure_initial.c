#include <stdio.h>
#include <string.h>
struct emp
{
    int id;
    char name[50];
    int sal;
};

int main()
{

    struct emp e1 = {111, "Bob", 5000};
    struct emp * ep;
    ep = &e1;
    printf("%d\n", ep -> id);
    printf("%s\n", ep -> name);
    printf("%d\n", ep -> sal);
    printf("%c\n", ep -> name[1]);  
    // printf("%d\n", e1.id);
    // printf("%s\n", e1.name);
    // printf("%d\n", e1.sal);


    return 0;
}