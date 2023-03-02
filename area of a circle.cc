// a program to find the area of a circle
#include <stdio.h>
int area(int pi,int r);//funtion prototype
int main()
{
  int pi,r,area;
printf ("enter the values of pi and r:");
  scanf("%d%d",&pi,&r);
  area=(pi,r);
  printf("the area is %d",area);
  return 0;  
}
// function defination
int area (int pi,int r)
{
  int A;
  A= pi * r*r;
  return A ;
}