#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,c;
    scanf("%f%f%f",&p,&r,&t);
    printf("%0.2f",p*pow(1+0.01*r,t));
}