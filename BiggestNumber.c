#include <stdio.h>
void main()
{
  int arr[5];
  int big;
  printf("Enter 5 numbers: ");

  for(int i=0; i<5; i++)
  {
    scanf("%d",&arr[i]);
  }

  big = arr[0];

  for(int i=1; i<5; i++)
  {
    if(arr[i]>big)
    {
      big = arr[i];
    }
  }

  printf("%Biggest Number is: %d",big);
}
