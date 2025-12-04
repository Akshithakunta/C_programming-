#include<stdio.h>
void main()
{
int n;
int i;
int a=0;
int b=1;
int c=a+b;
printf("enter the terms \n");
scanf("%d",&n);
printf("%d \n",a);
printf("%d \n",b);
printf("%d \n",c);
for(i=1; i<=3;i++)
{
a=b;
b=c;
c=a+b;
printf("%d \n",c);
}
}