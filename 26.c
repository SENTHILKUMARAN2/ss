#include<stdio.h>
void main()
{
int s[100],i,j,n;
scanf("%d",&s);
printf("enter the number");
for(i=0;i<=n;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(s[i]>s[j])
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
printf("%d",s[j]);
printf("to find median element");
n=(n+1)/2-1;
printf("%d".s[n]);
}
}
}
