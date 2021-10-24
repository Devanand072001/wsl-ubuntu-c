#include <stdio.h>
void test()
{
	extern int a;
	a++;
	printf("sample file %d\n", a);
}
