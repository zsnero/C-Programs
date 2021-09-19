#include<stdio.h>
void main()
{
    int count;
    printf("Enter the count: \n");
    scanf("%d",&count);
    int number[count], average=0, sum=0;

    printf("Enter the numbers: ");

    for(int i=0; i<count; i++)
    {
        scanf("%d",&number[i]);
    }

    for(int i=0; i<count; i++)
    {
        sum = sum + number[i];
    }

    average = sum / count;
    printf("Average: %d",average);
}
