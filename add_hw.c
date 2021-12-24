#include <stdio.h>
#include <stdlib.h>
int main(void){
    int number1;
    float number2,sum;
    printf("Enter a integer and a float\n");
    scanf("%d%f",&number1,&number2);
    sum=number1+number2;
    printf("Sum:%f",sum);
    return EXIT_SUCCESS;
}