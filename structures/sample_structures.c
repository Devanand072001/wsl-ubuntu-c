// array collections of variables of same type
// structure collection of variables of differet datatypes
#include <stdio.h>
struct emp
{
    int id;
    char name[50];
    int sal;
};
int main()
{

    struct emp e1 = {111, "Bob", 5000};
    printf("%d\n", e1.id);
    printf("%s\n", e1.name);
    printf("%d\n", e1.sal);

    struct emp e2;
    printf("Enter id: \n");
    scanf("%d", &e2.id);

    printf("Enter name:\n");
    __fpurge(stdin);
    fgets(e2.name, sizeof(e2.name), stdin);

    printf("Enter sal: \n");
    scanf("%d", &e2.sal);

    printf("%d\n", e2.id);
    printf("%s\n", e2.name);
    printf("%d\n", e2.sal);

    return 0;
}