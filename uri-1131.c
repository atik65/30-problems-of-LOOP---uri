#include <stdio.h>

int main()
{
    int goal1, goal2, team1_score = 0, team2_score = 0, permission, match = 0, drawn = 0;

    scanf("%d %d", &goal1, &goal2);
    if (goal1 > goal2)
    {
        team1_score++;
    }
    else if (goal1 < goal2)
    {
        team2_score++;
    }
    else
    {
        drawn++;
    }
    match++;

    while (1)
    {
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &permission);
        if (permission == 2)
        {
            break;
        }
        else if (permission == 1)
        {
            scanf("%d %d", &goal1, &goal2);
            if (goal1 > goal2)
            {
                team1_score++;
            }
            else if (goal1 < goal2)
            {
                team2_score++;
            }
            else
            {
                drawn++;
            }
            match++;
        }
    }

    printf("%d grenais\n", match);
    printf("Inter:%d\n", team1_score);
    printf("Gremio:%d\n", team2_score);
    printf("Empates:%d\n", drawn);

    if (team1_score > team2_score)
    {
        printf("Inter venceu mais\n");
    }
    else if (team1_score < team2_score)
    {
        printf("Gremio venceu mais");
    }
    else
    {
        printf("Não houve vencedor\n");
    }
    return 0;
}