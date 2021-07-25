#include<stdio.h>
void main()
{
    int arr[100], i, n, largest, secondlargest;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    largest = arr[0];
    secondlargest = arr[1];

    for(i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondlargest&&arr[i]!=largest)
        {
            secondlargest = arr[i];
        }
    }

    printf("largest = %d, second largest = %d",largest,secondlargest);



}
