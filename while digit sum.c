#include<stdio.h>
void main()
{
int a;
int digit;
int sum=0;
printf("enter the number \n",a);
scanf("%d",&a);
while(a!=0)
{
digit=a%10;
sum=sum+digit;
a=a/10;
printf("%d \n",sum);
}
}