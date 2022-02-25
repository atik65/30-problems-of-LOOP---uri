#include <stdio.h>
#include <math.h>
int main()
{

    int i, number;
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d^2 = %.0f\n", i, pow(i, 2));
        }
    }

    return 0;
}