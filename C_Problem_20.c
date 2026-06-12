#include <stdio.h>
int main()
{
    int a=2,i, prime, c=0;
    while(a<10)
    {
    i=2;
    prime=1;
    while(i<a)
    {
    if(a%i==0)
    {
    prime=0;
    }
    i++;
    }
    if(prime==1)
    {
    c=c+1;
    }
    a++;
    }
    printf("%d\n",c);
}
