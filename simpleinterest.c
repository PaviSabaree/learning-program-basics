#include <stdio.h>
#include <stdlib.h>
int main(void){
    int p;
    float r,n,si;
    printf("Enter a integer and 2 float number\n");
    scanf("%d%f%f",&p,&r,&n);
    si=(p*r*n)/100;
    printf("Simple interest:%f",si);
    return EXIT_SUCCESS;
}