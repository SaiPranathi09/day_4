#include<stdio.h>
int main()
{
int days;
int hours=days*24;
int  minutes=days*24*60;
int seconds=days*24*60*60;

printf("Enter the days :");
scanf("%d",&days);
printf("days are:%d\n",days);

printf("hours are:%d\n",days*24);
printf("minutes are : %d\n",days*24*60);
printf("seconds are :%d\n",days*24*60*60);
return 0;
}