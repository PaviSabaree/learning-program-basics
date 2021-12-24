#include <stdio.h>
#include <stdlib.h>
int main(void){
    char name[10];
    printf("Enter your name\n");
    scanf("%s",&name);
    printf("Hello, %s", name);
    return EXIT_SUCCESS;
}