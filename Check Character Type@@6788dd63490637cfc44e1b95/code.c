#include <stdio.h>
int main(){
    int main(){
        char a;
        scanf("%c",&a);
        if(a="A-Z" || a="a-z"){
            if(a=="a,e,i,o,u"){
                printf("Vowel");
            }
            else{
                printf("Consonant");
            }
        }
        else{
            printf("Digit");
        }
}