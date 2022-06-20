#include<stdio.h>
int main()
{
    int n,i,v,p,c=0,k;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=1;i<=n/2;i++)
    {
        c+=a[i];
    }
    v=0;
    for(i=n/2+1;i<=n;i++)
    {
        v+=a[i];
    }
    if (c-v<0)
    {
        p=(c-v)*-1;
    }
    printf("%d",p);
}    