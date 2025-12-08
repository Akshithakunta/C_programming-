#include<stdio.h>
void prime_not();
void main()
{
printf("main starts \n");
prime_not();
prime_not();
prime_not();
prime_not();
printf("main ends \n");
}
void prime_not()
{
printf("prime_not starts \n");
int a;
printf("enter the number \n");
scanf("%d",&a);
if(a%2!=0)
{
printf("%d is prime \n",a);
}
else
{
printf("%d is not prime \n",a);
}
printf("prime_not ends \n");
}