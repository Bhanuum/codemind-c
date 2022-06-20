#include<stdio.h>
int main()
{
    int n,i,v=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    v=a[0];
    for(i=0;i<n;i++)
    {
        if (a[i]<v)
        {
            v=a[i];
        }
    }
    printf("%d",v);
}