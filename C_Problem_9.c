#include <stdio.h>
int main() 
{
    int i,ones,sum;
    i=10;
    sum=0;
    while(i<100)
    {
        ones=i%10;
        if(ones==5)
        {
            sum=sum+i;
        }
        i=i+1;
     }
    printf("%d",sum);
}
