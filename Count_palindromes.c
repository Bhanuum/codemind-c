#include<stdio.h>
int main()
{
    int n,s=0,p,c,i,r;
    scanf("%d",&n);
    int a[100];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=1;i<=n;i++)
    {
       s=0;
       p=a[i];
       while (p!=0)
       {
           r=p%10;
           s=s*10+r;
           p/=10;
       }
       if(a[i]==s)
       {
           c++;
       }
    }
    printf("%d",c);
}    