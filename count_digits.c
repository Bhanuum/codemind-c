#include<stdio.h>
int main()
{
    int a,c,i,r;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        c=0;
        while (n[i]!=0)
        {
            r=n[i]%10;
            n[i]/=10;
            c++;
        }
        if(c==0){
            c++;
        }
        printf("%d ",c);
    }
}