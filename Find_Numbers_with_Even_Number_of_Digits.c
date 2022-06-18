#include<stdio.h>
int main()
{
    int n,p,i,k,r;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    k=0;
    for(i=1;i<=n;i++)
    {
        p=0;
        while (a[i]!=0)
        {
            r=a[i]%10;
            a[i]/=10;
            p+=1;
        }
        if (p%2==0)
        {
           k++;
        }
    }printf("%d",k);
}