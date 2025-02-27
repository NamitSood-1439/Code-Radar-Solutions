#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if (a<"A"){
        printf("Not an alphabet");
    }
    else if (a>='A' && a<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}