#include<stdio.h>
void main()
{
int a;
int check;
printf("enter the number \n");
scanf("%d",&a);
check=a>0;
(check)?printf("%d is positive number",a):
printf("%d is negative number",a);
}