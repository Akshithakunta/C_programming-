#include<stdio.h>
void main()
{
int a;
int check;
printf("enter the number \n");
scanf("%d",&a);
check=(a%2==0);
(check)?printf("%d is even number",a):
printf("%d is odd number",a);
}