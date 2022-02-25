#include <stdio.h>

int main()
{
    int n, i, j, num1, num2, start, end, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        scanf("%d %d", &num1, &num2);

        if (num1 < num2)
        {
            start = num1;
            end = num2;
        }
        else
        {
            start = num2;
            end = num1;
        }
        for (j = start + 1; j < end; j++)
        {

            if (j % 2 != 0)
            {
                sum += j;
            }
        }

        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}