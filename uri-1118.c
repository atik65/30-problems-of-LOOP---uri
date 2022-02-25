#include <stdio.h>

int main()
{

    float num, sum_num = 0, valid_no = 0, permission;

    while (1)
    {
        if (valid_no == 2)
        {
            break;
        }

        scanf("%f", &num);

        if (num >= 0 && num <= 10)
        {
            valid_no++;
            sum_num += num;
        }
        else
        {
            printf("nota invalida\n");
                }
    }

    printf("media = %.2f\n", sum_num / 2);
    valid_no = 0;
    sum_num = 0;

    while (1)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%f", &permission);

        if (permission == 1)
        {

            while (1)
            {
                if (valid_no == 2)
                {
                    break;
                }

                scanf("%f", &num);

                if (num >= 0 && num <= 10)
                {
                    valid_no++;
                    sum_num += num;
                }
                else
                {
                    printf("nota invalida\n");
                }
            }

            printf("media = %.2f\n", sum_num / 2);
            valid_no = 0;
            sum_num = 0;
        }
        else if (permission == 2)
        {
            return 0;
        }
    }

    return 0;
}