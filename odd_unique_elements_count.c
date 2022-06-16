#include<stdio.h>
int main()
{
    int n,c,i,j;
    scanf("%d",&n);
    int a[n];
    c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]==a[j]){
            a[j]=989;
            }
        }
        if (a[i]!=989 && a[i]%2!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}