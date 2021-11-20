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
    struct emp e2 ;
    printf("Enteer name:");
    fgets(e2.name, sizeof(e2.name), stdin);

    printf("Enter id, sal:\n");
    scanf("%d %d", &e2.id, &e2.sal);
  
    printf("%d\n", e2.id);
    printf("%s\n", e2.name);
    printf("%d\n", e2.sal);

    return 0;
}