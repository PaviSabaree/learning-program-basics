#include <stdio.h>
#include <stdlib.h>
int main(void){
    int number1,number2;
    printf("Enter 2 number\n");
    scanf("%d%d",&number1,&number2);
    if(number1>number2){
        printf("Number one is greater than number two");
    }else{
        printf("Number 2 is greater than number 1");
    }
}