#include<stdio.h>
int main()
{
  int count = 0;
  printf("Enter the count: ");
  scanf("%d",&count);
  ton(count);
}

int ton(int count)
{
  static int i = 1;

  if(i <= count)
  {
    printf("%d\n",i);
    i++;
  }

  else
  {
    return 0;
  }

  ton(count);
}
