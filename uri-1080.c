#include <stdio.h>
int main()
{

    int i, nums[100], highest = 0, position;

    for (i = 0; i < 100; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < 100; i++)
    {
        if (nums[i] > highest)
        {
            highest = nums[i];
            position = i + 1;
        }
    }

    printf("%d\n", highest);
    printf("%d\n", position);
    return 0;
}