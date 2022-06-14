#include<stdio.h>
int main()
{
    int n,i,v;
    float c;
    scanf("%d",&n);
    int a[n];
    c=0;
    v=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        c+=a[i];
    }
    c=c/n;
    printf("%.2f",c);
}