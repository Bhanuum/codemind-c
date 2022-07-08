#include<stdio.h>
int main()
{
    int n,s,i,j,p=0;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          if (a[i]==a[j] && i!=j)
          {
              p=a[i];
          }
        }
    }
    printf("%d",p);
}    