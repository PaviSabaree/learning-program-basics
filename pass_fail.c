#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float mark;
  printf("Enter your mark");
  scanf("%f",&mark);
  if(mark>=50&mark<=100){
      printf("you are passed");
  }else if (mark<50){
      printf("you are failed");
  }else{
      printf("invalid");
  }
  return EXIT_SUCCESS;
}