#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int i=0,k=0;
    if(a>x){
        i++;
    }
    else if (a<x){
        k++;
    }
    if(b>y){
        i++;
    }
    else if(b<y){
        k++;
    }
    if(c>z){
        i++;
    }
    else if(c<z){
        k++;
    }
    printf("%d %d",i,k);
    return 0;
}