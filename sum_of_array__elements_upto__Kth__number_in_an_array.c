#include<stdio.h>
int main()
{
    int n,c,v,i;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    c=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]!=k)
        {
            c+=a[i];
        }
        else
        {
            c+=a[i];
            break;
        }
    } 
    printf("%d",c);
}    