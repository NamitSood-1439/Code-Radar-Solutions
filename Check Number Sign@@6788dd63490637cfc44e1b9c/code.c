#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(0<a && a<=9){
        printf("Positive");
        }
    else if(a==0){
        printf("Zero");}
    else{
        printf("Negetive");}
}