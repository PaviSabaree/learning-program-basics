#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
        printf("a is greater");
        }else{
        printf("c is greater");
        }
    }else{
        printf("b is greater");
    }
    return EXIT_SUCCESS;
}