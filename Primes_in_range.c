#include<stdio.h>
 
int isprime(int n)
{
    if (n==1)
    {
        return 0;
    }
    for(int i = 2; i*i <=n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
 
int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    for(int i = a;i<=b;i++)
    {
        if(isprime(i))
        {
             c++;
        }
    }
    printf("%d",c);
}
 