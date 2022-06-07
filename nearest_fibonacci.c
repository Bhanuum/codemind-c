#include<stdio.h>
int main()
{
    int n,i,a,b,c,x=0;
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=a;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        if ((b>n) && (b-n)>(n-a)){
            printf("%d",a);
            x=1;
            break;
        } 
        else if ((b>n) && (b-n)<(n-a)){
            printf("%d",b);
            x=1;
            break;
        }
         else if(b>n){
            printf("%d %d",a,b);
            break;
        }
    }    
}