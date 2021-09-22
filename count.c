#include <stdio.h>
int main()
{
  int number, count=0;
  printf("Enter the number: ");
  scanf("%d",&number);
  while(number != 0)
  {
    count++;
    number = number/10;
    printf("%d\n",number);
  }

  printf("Count: %d\n",count);
  //printf("Number: %d",number);

  return 0;
}
