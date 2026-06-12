#include <stdio.h>
int main()
{
    int num, temp, first, last, count, power, middle, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    temp = num;
    count = 0;
    power = 1;
    while(temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;
    middle = (num % power) / 10;
    result = last * power + middle * 10 + first;
    printf("%d", result);
}
