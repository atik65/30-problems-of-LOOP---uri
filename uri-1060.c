#include <stdio.h>

int main()
{

    double number;
    int count = 0;
    int i;

    for (i = 0; i < 6; i++)
    {

        scanf("%lf", &number);

        if (number > 0)
        {
            count++;
        }
    }

    printf("%d valores positivos\n", count);
    return 0;
}