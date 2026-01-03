#include<stdio.h>
#include<stdio.h>
void main()
{
char name[100];
printf("enter the name :\n");
scanf("%[^\n]s",name);
int l=strlen(name);
printf("the length  is %d \n",l);
}