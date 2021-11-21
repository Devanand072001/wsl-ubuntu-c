#include <stdio.h>
#include <string.h>
typedef struct person
{
    char name[50];
    int city;
    float salary;
}Person;

void main()
{
    Person p1;
    strcpy(p1.name, "Vadivu");
    p1.city = 111;
    p1.salary = 100.05;

    printf("%s\n", p1.name);
    printf("%d\n", p1.city);
    printf("%f\n", p1.salary);
}