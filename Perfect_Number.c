#include<stdio.h>
int main()
{
    int n,i,p;
    scanf("%d",&n);
    p=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            p+=i;
        }
    }
    if (p==n){
        printf("True");
    }
    else{
        printf("False");
    }
}