#include<stdio.h>
void main()
{
int option;
printf("the food item available are :\n");
printf("1.pani puri");
printf("2.cotton candy");
printf("3.chicken biryani");
printf("4.bitter gaurd \n");
printf("please enter the option to select the food item \n");
scanf("%d",&option);
switch(option)
{
case 1:
{
printf("pani puri is ordered \n");
}break;
case 2:
{
printf("cotton candy is ordered \n");
}break;
case 3:
{
printf("chicken biryani is ordered \n");
}break;
case 4:
{
printf("bitter gaurd is ordered \n");
}break;
default :
{
printf("please select the valid option \n");
}
}
}