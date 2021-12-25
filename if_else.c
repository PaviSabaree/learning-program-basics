#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>0){
        printf("Number is positive");
    }else{
        printf("Number is negative");
    }
}