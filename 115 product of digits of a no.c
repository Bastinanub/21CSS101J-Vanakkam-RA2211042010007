#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int num;
    long long product=1ll;

    /* Input number from user */
    printf("Enter any number to calculate product of digit: ");
    scanf("%d", &num);

    product = (num == 0 ? 0 : 1ll);

    /* Repeat the steps till num becomes 0 */
    while(num != 0)
    {
        /* Get the last digit from num and multiplies to product */
        product = product * (num % 10);

        /* Remove the last digit from n */
        num = num / 10;
    }

    printf("Product of digits = %lld", product);

    return 0;
}
