#include <stdio.h>

int main()
{

    int start, end, num1 = 1, num2 = 1, sum = 0, i, j, nums[20];

    while (num1 > 0 && num2 > 0)
    {
        scanf("%d %d", &num1, &num2);

        if (num1 > 0 && num2 > 0)
        {

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
            for (i = start; i <= end; i++)
            {
                nums[i] = i;
                sum += i;
            }

            for (j = start; j <= end; j++)
            {
                printf("%d ", nums[j]);
            }
            printf("Sum=%d\n", sum);
            sum = 0;
        }
    }

    return 0;
}