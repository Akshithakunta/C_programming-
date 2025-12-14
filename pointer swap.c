#include<stdio.h>
void swap(int*m,int*n);
void main()
{
int a;
int b;
printf("enter the number \n");
scanf("%d",&a);
printf("enter the number\n");
scanf("%d",&b);
printf("before swap a=%d \t b=%d \n",a,b);
swap(&a,&b);
printf("after the swap a=%d \t b=%d \n",a,b);
}
void swap(int*m ,int*n)
{
int c=*m;
     *m=*n;
     *n=c;
}