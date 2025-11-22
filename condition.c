#include<stdio.h>
void main()
{
    int a;
    printf("enter the number \n");
    scanf("%d",&a);
    int check =a>0;
    (check)? printf("%d is positive number",a):
    printf("%d is a negative number",a);
}