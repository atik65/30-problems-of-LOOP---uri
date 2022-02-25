#include <stdio.h>

int main()
{

    int x, i, out = 0, in = 0, test_num;
    scanf("%d", &x);

    for (i = 0; i < x; i++)
    {
        scanf("%d", &test_num);

        if (test_num >= 10 && test_num <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}