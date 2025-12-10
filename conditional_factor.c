#include<stdio.h>
void main()
{
int a;
int check;
printf("enter the number \n");
scanf("%d",&a);
check=(23%a==0);
(check)?printf("%d is a factor of 23",a):
printf("%d is not a factor 23",a);
}