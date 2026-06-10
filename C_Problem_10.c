#include <stdio.h>
int main() 
{
    int i,tens,sum;
    i=10;
    sum=0;
    while(i<100)
    {
        tens=i/10;
        if(i%2!=0)
        {
            if(tens==7)
            {
                sum=sum+i;
            }
        }
    i=i+1;
    }
    printf("%d",sum);
}
