#include<stdio.h>
int main()
{
    int a, b, c=0;
    printf("Enter the Number : ");
    scanf("%d",&a);
    while(a>=10)
    {
        b=a%100;
        if(b==16 || b==25 || b==36 || b==49 || b==64 || b==81)
        {
            c=c+1;
        }
        a=a/10;
    }
    printf("%d",c);
}
