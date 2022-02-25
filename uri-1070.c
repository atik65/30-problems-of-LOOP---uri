#include <stdio.h>
int main()
{

    int number, odds = 0, i;
    scanf("%d", &number);

    for (i = number; odds < 6; i++)
    {

        if (i % 2 != 0)
        {
            printf("%d\n", i);
            odds++;
        }
    }

    return 0;
}