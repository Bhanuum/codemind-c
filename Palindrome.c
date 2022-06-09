#include<stdio.h>
int main()
{
    int n,g,c;
    scanf("%d",&n);
    c=n;
    g=0;
    while (c>0)
    {
        g=g*10+c%10;
        c/=10;
    }
    if(g==n){
        printf("True");
    }
    else{
        printf("False");
    }
}