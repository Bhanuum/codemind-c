#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
            printf("%d ", j);
        }
        for(j=1;j<=(i*2-1);j++)
        {
            printf("%d ", i);
        }
        for(j=i+1;j<=n;j++)
        {
            printf("%d ", j);
        }
        printf("
");
    }
    for(i=1;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("%d ", j);
        }
        for(j=1;j<=(i*2-1);j++)
        {
            printf("%d ", i+1);
        }
        for(j=i+1;j<=n;j++)
        {
            printf("%d ", j);
        }
        printf("
");
    }
}