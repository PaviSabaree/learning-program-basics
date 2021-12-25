#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int choice;
  printf("1 for apple\n2 for banana\n3 for grapes\n4 for kiwi\n");
  scanf("%d",&choice);
  switch (choice)
  {
  case 1:
      printf("selected apple");
      break;
  case 2:
   printf("selected banana");
      break;
  case 3:
   printf("selected grapes");
      break;
  case 4:
   printf("selected kiwi");
      break;
  default:
  printf("invalid selection");
      break;
  }
  return EXIT_SUCCESS;
}