#include <stdio.h>
#include <stdlib.h>
int main(void){
    float a,b,c,average;
    printf("Enter 3 number");
    scanf("%f%f%f",&a,&b,&c);
    average=(a+b+c)/3;
    printf("Average:%f",average);
    return EXIT_SUCCESS;
}