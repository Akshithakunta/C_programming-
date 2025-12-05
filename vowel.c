#include<stdio.h>
void main()
{
char ch;
int check;
printf("enter the character \n");
scanf("%c",&ch);
int UC =(ch>='A'&& ch<='Z');
int LC=(ch>='a'&& ch<='z');
int dig=(ch>='0'&& ch<='9');
 check=!UC&!LC&!dig;
printf("%c is a symbol is %d",ch,check);
}