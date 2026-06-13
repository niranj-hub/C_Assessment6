#include<stdio.h>
int main()
{
    int a, b, c=0;
    printf("Enter the Number : ");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        if(b==1 || b==4 || b==9)
        {
            c=c+1;
        }
        a=a/10;
    }
    printf("%d",c);
}
