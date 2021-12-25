#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a,b,choice,result;
    printf("Enter 2 number\n");
    scanf("%d%d",&a,&b);
    printf("1 add\n2 sub\n3 mul\n4 div\n");
    scanf("%d",&choice);
    if(choice==1){
        result=a+b;
        printf("%d",result);
    }else if(choice==2){
        result=a-b;
        printf("%d",result);
    }else if(choice==3){
        result=a*b;
        printf("%d",result);
    }else if(choice==4){
        result=a/b;
        printf("%d",result);
    }else{
        printf("enter valid choice");
    }
    return EXIT_SUCCESS;
}