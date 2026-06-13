#include <stdio.h>
int main()
{
    int number, count;
    int ones, tens, hundreds, thousands, ten_thousands;
    int sum;
    number = 1;
    count = 0;
    while(number < 100000)
    {
        ones = number % 10;
        tens = (number / 10) % 10;
        hundreds = (number / 100) % 10;
        thousands = (number / 1000) % 10;
        ten_thousands = (number / 10000) % 10;
        sum = ones + tens + hundreds + thousands + ten_thousands;
        if(sum == 14)
        {
            count = count + 1;
        }
        number = number + 1;
    }
    printf("%d", count);
}
