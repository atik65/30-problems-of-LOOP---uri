#include <stdio.h>

int main()
{

    int valid_No = 0;
    float num, sum_num = 0;

    while (1)
    {
        if (valid_No == 2)
        {
            break;
        }
        scanf("%f", &num);

        if (num >= 0 && num <= 10)
        {
            valid_No++;
            sum_num += num;
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    printf("media = %.2f\n", sum_num / 2);

    return 0;
}
