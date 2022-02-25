#include <stdio.h>

int main()
{

    int start, end, i, sum = 0;
    scanf("%d %d", &end, &start);

    for (i = start + 1; i < end; i++)
    {

        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}