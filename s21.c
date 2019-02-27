#include<stdio.h>
int main()
{
int i,n,a,s,sum=0;
printf("\n Enter the number of arithmetic progression");
scanf("%d",&n);
printf("\n Enter a and s values");
scanf("%d%d",&a,&s);
for(i=1;i<=n;i++)
{
sum=sum+(a+(i*s));
}
  printf("\nResult is %d",sum);
return 0;
}
