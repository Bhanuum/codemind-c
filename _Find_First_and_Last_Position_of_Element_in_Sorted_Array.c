#include<stdio.h>
int main()
{
    int m,n,i,arr[1001],s,e;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            s=i;
            break;
        }
    }
    if(arr[i]!=m)
    {
        printf("-1 ");
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            e=i;
        }
    }
    if(arr[e]==m)
    {
        printf("%d %d",s,e);
    }
    else if(arr[i]!=m)
    {
        printf("-1");
    }
}