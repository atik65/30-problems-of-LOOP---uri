#include <stdio.h>

int main()
{

    int i, positives = 0;
    double number, sum = 0, avg;

    for (i = 0; i < 6; i++)
    {

        scanf("%lf", &number);

        if (number > 0)
        {
            positives++;
            sum += number;
        }
    }

    avg = sum / positives;

    printf("%d valores positivos\n", positives);
    printf("%0.1f\n", avg);

    return 0;
}