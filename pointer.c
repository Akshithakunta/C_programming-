#include<stdio.h>
void main()
{
int a=20;
int *p=&a;
printf("a=%d \n",a);
printf("p=%d \n",p);
printf("*p=%d \n",*p);
*p=200;
printf("a=%d \n",a);
printf("&a=%d \n",&a);
int b=73;
*p=&b;
printf("p=%d \n",p);
printf("&b=%d \n",&b);
printf("*p=%d \n",*p);
printf("b=%d \n",b);
}