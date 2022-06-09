#include<stdio.h>
int main()
{
    int i,j,k,m,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=1;
        scanf("%d",&k);
        for(j=2;j<=k;j++){
           m=m*j;
        } 
        printf("%d
",m);
    }
    return 0;
}
