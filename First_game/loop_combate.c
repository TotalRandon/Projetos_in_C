#include <stdio.h>

int main(void)
{
    char enter;
    int vida1, dano1, def1;
    int vida2, dano2, def2;
    int acao;
    int sair = 0;
    while (sair == 0) 
    {
        vida1 = 12;
        vida2 = 10;
        dano1 = 8;
        dano2 = 3;
        def1 = 2;
        def2 = 1;
        printf("\nMAGO    niv.1      GOBLIN  niv.1\n");
        printf("VIDA:   %d/12      VIDA:   %d/5 \n", vida1, vida2);
        printf("DEFESA: %d/2        DEFESA: %d/1 \n", def1, def2);
        printf("DANO:   %d/8        DANO:   %d/3 \n\n", dano1, dano2);

        printf("digite 1 para atacar\n");
        printf("digite 2 para defender\n");
        printf("digite 3 para fugir\n\n");
        scanf("%d", &acao);
        {
            if (acao == 1)
            {
                vida2 = vida2 + def2;
                vida2 = vida2 - dano1;
                printf("\nMAGO    niv.1      GOBLIN  niv.1\n");
                printf("VIDA:   %d/12      VIDA:  %d/5 \n", vida1, vida2);
                printf("DEFESA: %d/2        DEFESA: %d/1 \n", def1, def2);
                printf("DANO:   %d/8        DANO:   %d/3 \n\n", dano1, dano2);
                scanf("%c", &enter);
                {
                    sair = 0;
                }

            }
            else
            {
                if (acao == 2)
                {
                    vida1 = vida1 + def1;
                    vida1 = vida1 - dano2;
                    printf("\nMAGO    niv.1      GOBLIN  niv.1\n");
                    printf("VIDA:   %d/12       VIDA:   %d/5 \n", vida1, vida2);
                    printf("DEFESA: %d/2        DEFESA: %d/1 \n", def1, def2);
                    printf("DANO:   %d/8        DANO:   %d/3 \n\n", dano1, dano2);
                    scanf("%c", &enter);
                    {
                        sair = 0;
                    }
                }
                else
                {
                    if (acao == 3)
                    {
                        printf("\nvoce fugiu sem deixar rastros...\n\n");
                        scanf("%c", &enter);
                        {
                            sair = 0;
                        }
                    }
                    else
                    {
                        printf("\ncodigo invalido!\n\n");
                        sair = 1;
                    }
                }
            }
        }
    }
    return 0;
}
