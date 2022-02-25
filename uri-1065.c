#include <stdio.h>
int main()
{

    int i, even_number = 0, number;

    for (i = 0; i < 5; i++)
    {

        scanf("%d", &number);

        if (number % 2 == 0)
        {
            even_number++;
        }
    }

    printf("%d valores pares\n", even_number);
    return 0;
}