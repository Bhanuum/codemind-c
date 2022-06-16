#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d",&n);
    int a[i];
    for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    }
    k=0;
    for(i=1;i<=n;i++)
    {
        if (a[i]%2!=0)
        {
            k+=a[i];
        }
        else 
        {
            break;
        }
    }
    printf("%d",k);
}