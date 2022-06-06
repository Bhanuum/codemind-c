#include<stdio.h>
#include<math.h>
int main()
{
int n,i,no,a[20],s=0;
scanf("%d",&n);
for(i=0;n>0;i++)
{
    no=n%10;
    s=s+no*pow(8,i);
    n=n/10;
}
for(i=0;s>0;i++)
{
    a[i]=s%2;
    s=s/2;
}
i--;
while(i>=0)
{
    printf("%d",a[i]);
    i--;
}
}

