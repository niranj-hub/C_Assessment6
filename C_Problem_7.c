#include <stdio.h>
int main() 
{
    int i,ones,tens,sum;
    i=11;
    while(i<=99)
    {
        ones=i%10;
        tens=i/10;
        sum=ones+tens;
        if(sum==7)
        {
            printf("%d\n",i);
        }
        i=i+2;
     }
}
