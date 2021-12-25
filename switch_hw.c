#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int choice;
  printf("Enter your choice from 1 to 7");
  scanf("%d",&choice);
  switch (choice){
      case 1: 
      printf("sunday");
      break;
      case 2:
       printf("monday");
      break;
      case 3:
       printf("tuesday");
      break;
      case 4:
       printf("wednesday");
      break;
      case 5:
       printf("thursday");
      break;
      case 6:
       printf("friday");
      break;
      case 7:
       printf("saturday");
      break;
      default:
      printf("Invalid");

  }
 
 
  return EXIT_SUCCESS;
}