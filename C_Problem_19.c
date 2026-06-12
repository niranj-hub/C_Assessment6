#include<stdio.h>
int main()
{
    int a, b, c, d, i,prime;
    printf("Enter the Number : ");
    scanf("%d",&a);
    b=(a/10)%10;
    c=(a/100)%10;
    d=c*10+b;
    if(d<2)
    {
    printf("Not prime");
    return 0;
    }
    i=2;
    prime=1;
    while(i<d)
    {
    if(d%i==0)
    {
    prime=0;
    }
    i++;
    }
    if(prime==1) 
    {
    printf("Prime");
    }
    else
    {
    printf("Not prime");
    }
}
