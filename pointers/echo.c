#include <stdio.h> void main() { int a = 10, b = 20; int *p1 = &a, *p2 = &b; printf(%p %pn, p1, p2); printf(%d %dn, *p1, *p2); p1 = p2; printf(%p %pn, p1, p2); printf(%d %dn, *p1, *p2); }
