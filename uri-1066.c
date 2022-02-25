#include <stdio.h>

int main()
{

    int i, number, even = 0, odd = 0, positive = 0, negative = 0, zero = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &number);

        // checking for even and odd
        if (number % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        // checking for postive and negative

        if (number > 0)
        {
            positive++;
        }
        else if (number == 0)
        {
            zero++;
        }
        else
        {
            negative++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}