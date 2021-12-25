#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float percent;
  printf("enter percentage");
  scanf("%f",&percent);
  if(percent>=90 && percent<=100){
      printf("A");
  }else if(percent>=80&&percent<=89){
    printf("B")  ;
  }else if(percent>=70&&percent<=79){
    printf("C")  ;
  }
  else if(percent>=60&&percent<=69){
    printf("D")  ;
  }else if(percent>=50&&percent<=59){
    printf("E")  ;
  }else if(percent<50&&percent>=0){
    printf("Failed")  ;
  }else {
      printf("invalid");
  }
  return EXIT_SUCCESS;
}