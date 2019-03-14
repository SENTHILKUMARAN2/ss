#include <stdio.h>

int main(void) 
{
	char str[50];
	int i,c=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			c=c+1;
		}
	}
	printf("\nthe number of numeric in the sentence is:%d",c);
	return 0;
}
