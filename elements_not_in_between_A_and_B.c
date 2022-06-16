#include<stdio.h>
int main()
{
    int n,c,sum=0;
    scanf("%d",&n);
    int arr[n],a,b;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            printf("%d ",arr[i]);
            c++;
        }
    }
    if (c==0)
    {
        printf("-1");
    }
}    