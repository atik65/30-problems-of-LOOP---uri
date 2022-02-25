#include <stdio.h>

int main()
{

    int i, number;
    double test_num1, test_num2, test_num3, total, avg;
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        scanf("%lf %lf %lf", &test_num1, &test_num2, &test_num3);
        total = (test_num1 * 2.0) + (test_num2 * 3.0) + (test_num3 * 5.0);

        avg[i] = total / 10;

        printf("%0.1f\n", avg);
    }

    return 0;
}