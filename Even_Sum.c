#include<stdio.h>
int main()
{
    int n,i,c,v,s;
    scanf("%d",&n);
    int a[n];
    c=0;
    v=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            c+=a[i];
        }
    }
    printf("%d",c);
}