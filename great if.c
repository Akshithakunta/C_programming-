#include<stdio.h>
void main()
{
int a,b;
printf("enter the number \n");
scanf("%d",&a);
printf("enter the number \n");
scanf("%d",&b);
if(a>b)
{
printf("%d is great \n",a);
printf("%d is small \n",b);
}
else
{
printf("%d is great \n",b);
printf("%d is small \n",a);
}
}