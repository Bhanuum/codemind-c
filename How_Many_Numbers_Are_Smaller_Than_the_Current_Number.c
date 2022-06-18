#include<stdio.h>
int main()
{
    int n,c,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=n;j++)
        {
            if (i!=j && a[j]<a[i])
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}