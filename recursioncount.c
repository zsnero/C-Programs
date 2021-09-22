/*C program to count digits using recursion.*/

#include <stdio.h>

//function to count digits
int countDigits(int num)
{
    static int count=0;

    if(num>0)
    {
        count++;
        return countDigits(num/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number;
    int count=0;

    printf("Enter a positive integer number: ");
    scanf("%d",&number);

    count=countDigits(number);

    printf("Total digits in number %d is: %d\n",number,count);

    return 0;
}
