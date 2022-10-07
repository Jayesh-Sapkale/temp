#include <stdio.h>

int isPrime(int a)
{
    if (a > 1)
    {
        for (int i = 2; i <= a; i++)
        {
            if (a % i == 0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num1, num2, count;

    printf("Enter a number: ");
    scanf("%d%d", &num1, &num2);

    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i) != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}