#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=1;i<=n-1;i++)
    {
        if (a[i-1]%2!=0 && a[i+1]%2!=0 && a[i]%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}