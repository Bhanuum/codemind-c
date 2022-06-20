#include<stdio.h>
int main()
{
    int n,s=0,p,k,c,i,r;
    scanf("%d %d",&n,&k);
    int a[100];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=1;i<=n;i++)
    {
      if(a[i]%k!=0)
      {
          c++;
      }
    }
    printf("%d",c);
}    