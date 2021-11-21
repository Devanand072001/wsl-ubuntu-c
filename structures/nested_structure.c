#include <stdio.h>
#include <string.h>
typedef struct organisation
{
    char name[50];
    int year;
    struct employee
    {
        int id;
        char emp_name[50];
        int sal;
    }emp;
}org;

void main()
{
    org o;
    strcpy(o.name, "Bit");
    o.year = 1999;
    o.emp.id = 111;
    strcpy(o.emp.emp_name, "John");
    o.emp.sal = 7000;

    //display
    printf("%s\n", o.name );;
    printf("%d\n", o.year
    );
    printf("%d\n", o.emp.id);
    printf("%s\n", o.emp.emp_name);
     printf("%d\n", o.emp.sal);
}
