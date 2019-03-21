#include<stdio.h>
#include<conio.h>
int main(void)
{
int a[20],max=0,i;
printf("enter a no.");
for(i=0;i<10;i++)
scanf("%d",&a[i]);	
for(i=0;i<10;i++)
{
if(a[i]>max)
{	
max=a[i];
}
}
printf("%d",max);
getch();
}
