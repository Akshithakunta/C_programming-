#include<stdio.h>
void main()
{
int n=8;
int z=8;
int r=(n%2==0)?(n*n+6):(n-4);
if(z<12)
printf("%d",r+z*z);
else if(z%2==0)
printf("%d",r-(z*3));
else
printf("%d",r*z);
}