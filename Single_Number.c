#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,c=0;;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
        c=0;
        for(int j=1;j<=n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
            }    
        }
        if (c==0)
        {
           printf("%d",arr[i]);
           break;
        }
    }
}
