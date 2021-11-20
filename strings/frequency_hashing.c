#include <stdio.h>
int main(){
    char s[] = "DACBCAD";
    int hash[26] = {0};
    // to count frequecy of each alphabets

    for(int i = 0; s[i]; i++)
        ++hash[s[i] - 65];

    // for(int i = 0; i < 26; i++){
    //     printf("%d\n", hash[i]);
    // }

    for(int i = 0; s[i]; i++){
        if(hash[s[i] - 65] != 0){
            printf("%c %d \n", s[i], hash[s[i] - 65]);
            hash[s[i] - 65];
        }
    }
    return 0;
}