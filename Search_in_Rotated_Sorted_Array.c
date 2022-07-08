#include<stdio.h>
int main()
{
    int n,s,i,j,p,c;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    c=0;
    p=-1;
    for(i=0;i<n;i++)
    {
       if (a[i]==s)
       {
           p=i;
       }
    }
    printf("%d",p);
}    