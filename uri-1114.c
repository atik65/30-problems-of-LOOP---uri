#include <stdio.h>

int main()
{
    int test_pass = 1, right_pass = 2002;

    while (test_pass != right_pass)
    {

        scanf("%d", &test_pass);

        if (test_pass == right_pass)
        {
            printf("Acesso Permitido\n");
                }
        else
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}