#include <stdio.h>
int main()
{
    int num, i, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    i = 1;
    count = 0;
    while(i <= num)
    {
        if(num % i == 0)
        {
            count = count + 1;
        }
        i = i + 1;
    }
    if(count == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
