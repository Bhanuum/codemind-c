#include<stdio.h>
int main()
{
    int n,s,i,j;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=1;
        for(j=0;j<n;j++)
        {
            if (i!=j)
            {
                s*=a[j];
            }
        }
        printf("%d ",s);
    }
}