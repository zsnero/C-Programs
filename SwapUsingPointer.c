#include<stdio.h>
void main()
{

  int a=10, b=20, *p1=&a, *p2=&b;

  printf("Before swap: *p1=%d *p2=%d\n",*p1,*p2);
  *p1=*p1+*p2;
  *p2=*p1-*p2;
  *p1=*p1-*p2;
  printf("After swap: *p1=%d *p2=%d\n",*p1,*p2);

}
