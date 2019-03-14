#include<stdio.h>
void main()
{
int hrs,min,hr1,min1,hr2,min2;
printf("enter 2 times in hour and minute format");
scanf("%d%d",&hr1,&min1);
scanf("%d%d",&hr2,&min2);
hrs=hr2-hr1;
min=min2-min1;
printf("%d\t%d",hrs,min);
}
