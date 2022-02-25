#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 1;

    while (num1 != num2)
    {

        scanf("%d %d", &num1, &num2);
        if (num1 != num2)
        {
            if (num1 > num2)
            {
                printf("Decrescente\n");
            }
            else
            {
                printf("Crescente\n");
            }
        }
    }

    return 0;
}