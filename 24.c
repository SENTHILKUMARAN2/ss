#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,a[i],temp;
scanf("%d",&n);
printf("Enter the num");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(i=0;i<n;i++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("%d",a[j];
}
return 0;
}
