#include <stdio.h>

int main()
{
    char animal_type, x = '%';
    int animal_num, test_case, i, rabbits_c = 0, rats_r = 0, frogs_s = 0, total;
    double rabbits_per, rats_per, frogs_per;

    scanf("%d", &test_case);

    for (i = 1; i <= test_case; i++)
    {

        scanf("%d %c", &animal_num, &animal_type);

        if (animal_type == 'C')
        {
            rabbits_c += animal_num;
        }
        else if (animal_type == 'R')
        {
            rats_r += animal_num;
        }
        else if (animal_type == 'S')
        {
            frogs_s += animal_num;
        }
    }

    total = rabbits_c + rats_r + frogs_s;
    rabbits_per = (rabbits_c * 100.00) / total;
    rats_per = (rats_r * 100.00) / total;
    frogs_per = (frogs_s * 100.00) / total;

    printf("Total: %d cobaias\n", rabbits_c + rats_r + frogs_s);
    printf("Total de coelhos: %d\n", rabbits_c);
    printf("Total de ratos: %d\n", rats_r);
    printf("Total de sapos: %d\n", frogs_s);
    printf("Percentual de coelhos: %0.2f %c\n", rabbits_per, x);
    printf("Percentual de ratos: %0.2f %c\n", rats_per, x);
    printf("Percentual de sapos: %0.2f %c\n", frogs_per, x);

    return 0;
}