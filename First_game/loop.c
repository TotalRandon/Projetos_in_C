#include <stdio.h>
#include <conio.h>

int main(void)
{
    char enter;
    int vida1, dano1, def1;
    int vida2, dano2, def2;
    int acao;
    int sair = 0;
    //inicializa��o das vidas e pontos
    vida1 = 12;
    vida2 = 10;
    dano1 = 8;
    dano2 = 3;
    def1 = 2;
    def2 = 1;
    while (sair == 0)
    {
        printf("\nMAGO    niv.1      GOBLIN  niv.1\n");
        printf("VIDA:   %d/12      VIDA:   %d/5 \n", vida1, vida2);
        printf("DEFESA: %d/2        DEFESA: %d/1 \n", def1, def2);
        printf("DANO:   %d/8        DANO:   %d/3 \n\n", dano1, dano2);

        printf("digite 1 para atacar\n");
        printf("digite 2 para defender\n");
        printf("digite 3 para fugir\n\n");
        scanf("%d", &acao);

        switch (acao)
        {
        case 1:
            vida2 = vida2 + def2;
            vida1 = vida1 - dano1;
            break;
        case 2:
            vida1 = vida1 + def1;
            vida2 = vida2 - dano2;
            break;
        case 3:
            printf("\nvoce fugiu sem deixar rastros...\n\n");
            break;
        default :
            printf("\ncodigo invalido!\n\n");
            sair = 1;
            break;
        }
        system("cls");
    }
    return 0;
}
