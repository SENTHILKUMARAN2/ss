#include <stdio.h>

int main()
{
    int n,i,a[60];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("%d %d\n",i,a[i]);
    }
    return 0;
}
