#include <stdio.h>
int main() 
{
    int i,ones,tens,sum;
    i=10;
    while(i<100)
    {
        ones=i%10;
        tens=i/10;
        sum=ones+tens;
        if(sum==6)
        {
            printf("%d\n",i);
        }
        i=i+2;
     }
}
