#include <stdio.h>

int main()
{

    int number, i;

    scanf("%d", &number);

    int number_array[10000];

    for (i = 0; i < number; i++)
    {
        scanf("%d", &number_array[i]);
    }

    for (i = 0; i < number; i++)
    {

        if (number_array[i] > 0 && number_array[i] % 2 == 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (number_array[i] > 0 && number_array[i] % 2 != 0)
        {
            printf("ODD POSITIVE\n");
        }
        else if (number_array[i] < 0 && number_array[i] % 2 != 0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if (number_array[i] < 0 && number_array[i] % 2 == 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else
        {
            printf("NULL\n");
        }
    }

    return 0;
}