#include <stdio.h>

int main()
{
    int i, test_case;
    float dividend, divisor;

    scanf("%d", &test_case);

    for (i = 1; i <= test_case; i++)
    {
        scanf("%f %f", &dividend, &divisor);

        if (divisor == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n", dividend / divisor);
        }
    }

    return 0;
}