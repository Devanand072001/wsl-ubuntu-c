#include <stdio.h>
#include <string.h>
int is_anagram(char * s1, char * s2);
int main(){
    char s1[] = "abcbca";
    char s2[] = "ccabba";
    if(is_anagram(s1, s2))
        printf("is anagram\n" );
    else
        printf("not anagram");
    return 0;
}

int is_anagram(char * s1, char * s2){
    if(strlen(s1) != strlen(s2))
        return 0;
    int hash[26] = {0};
    for(int i = 0; s1[i]; i++){
        ++hash[s1[i] - 'a'];
        --hash[s2[i] - 'a'];
    }
    // int size = sizeof(hash[0]) / sizeof(int);
    for(int i = 0; i < 26; i++){
        if(hash[i] != 0)
            return 0;
        return 1;
    }
}