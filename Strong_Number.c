#include<stdio.h>
int main()
{
    int n,p=1,s=0,c,r,i;
    scanf("%d",&n);
    c=n;
    while (c>0){
        r=c%10;
        c=c/10;
        p=1;
        for(r;r>=1;r--){
            p*=r;
        }
        s+=p;
    }
    if(s==n){
        printf("The number %d is a strong number",n);
    }
    else{
        printf("The number %d is not a strong number",n);
    }
}
