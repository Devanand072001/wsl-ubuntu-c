#include <stdio.h>
#include <string.h>
// will not work on gcc linux.
int main(){
    char s[50] = "A man, a plan, a canal: Panama";
    char temp[50];
    strcmp(temp, s);
    if(strcmp(s, strrev(temp)))
    printf("Palidrome");
    else
    printf("not palindrome");
    return 0;
}