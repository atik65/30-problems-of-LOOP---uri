#include <stdio.h>
int main()
{
    int s_day, s_hour, s_min, s_second, e_day, e_hour, e_min, e_second, days, hours, miniutes, seconds, slot1, slot2, total_seconds, rest_seconds;

    scanf("%*s %d", &s_day);
    scanf("%d %*s %d %*s %d", &s_hour, &s_min, &s_second);

    scanf("%*s %d", &e_day);
    scanf("%d %*s %d %*s %d", &e_hour, &e_min, &e_second);

    slot1 = s_second + (s_min * 60) + (s_hour * 60 * 60) + (s_day * 24 * 60 * 60);
    slot2 = e_second + (e_min * 60) + (e_hour * 60 * 60) + (e_day * 24 * 60 * 60);

    total_seconds = slot2 - slot1;

    days = total_seconds / 86400;
    rest_seconds = total_seconds % 86400;
    hours = rest_seconds / 3600;
    rest_seconds %= 3600;
    miniutes = rest_seconds / 60;
    seconds = rest_seconds % 60;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", miniutes);
    printf("%d segundo(s)\n", seconds);
    return 0;
}