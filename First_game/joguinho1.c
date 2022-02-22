#include <stdio.h>
#include <locale.h>

/* objetivo e uma start de escolha do personagens, desse personagem com certas 
caracteristicas especificas, nisto ocorre uma pequena historia diferentes dentre os
demais criados, e se deparam com um inimigo, goblin que deve atarcar vos, derrotando-o 
finalize a historia.

Herois:
mago =      dano1 + vida1 + def1
guerreiro = dano2 + vida2 + def2
arqueiro =  dano3 + vida3 + def3

inimigos:
goblin =    dano4 + vida4 + def4
*/

int main(void)
{
    setlocale(LC_ALL, "portuguese");
    char enter;
    int dano1, dano2, dano3, dano4;
    int vida1, vida2, vida3, vida4;
    int def1, def2, def3, def4;
    int personagem, acao;
    float mago, guerreiro, arqueiro, goblin;
    {
        printf("\n");
        printf("********************************\n");
        printf("*                              *\n");
        printf("*  Bem vido ao meu joguinho... *\n");
        printf("*                              *\n");
        printf("********************************\n");
        printf("\n");

        printf("pressione ENTER para iniciar o jogo\n");
        scanf("%c", &enter);
        {
            printf("escolha um personagem: \n\n");
            printf("digite 1 para escolher o mago\n");
            printf("digite 2 para escolher o guerreiro\n");
            printf("digite 3 para escolher o arqueiro\n\n");
            scanf("%d", &personagem);
            {

                ///////////////////////////////////////////////escolhendo personagem///////////////////////////////////////////////

                if (personagem == 1)
                {
                    dano1 = 8;
                    vida1 = 12;
                    def1 = 2;
                    mago = dano1 + vida1 + def1;
                    printf("\nvoce escolheu o mago!\n\n");
                    printf("MAGO    niv.1\n");
                    printf("VIDA:   12/12\n");
                    printf("DEFESA: 2/2\n");
                    printf("DANO:   8/8\n");
                    scanf("%c", &enter);
                    {
                        printf("\nok...\n\n");
                        scanf("%c", &enter);
                        {
                            printf("vamos começar esta historia, pressione enter para continuar...\n");
                            scanf("%c", &enter);
                            {
                                printf("voce, um aventureiro nato que começa sua aventura na cidade de valleyson");
                                scanf("%c", &enter);
                                {
                                    printf("uma cidadezinha nao muito populoza com coisas bem simples de se fazer nela, como:");
                                    scanf("%c", &enter);
                                    {
                                        printf("ir pegar agua no poço, ordenhar as vacas, colher amoras nos campos de abedopark,\n");
                                        printf("sabe, essas coisas simples...\n");
                                        scanf("%c", &enter);
                                        {
                                            printf("...voce encontra um goblin niv.1 raivozo, ele vai te atacar, o que voce faz?\n\n");
                                            scanf("%c", &enter);
                                                vida4 = 5;
                                                dano4 = 3;
                                                def4 = 0;
                                                goblin = vida4 + dano4 + def4;
                                            printf("\nMAGO    niv.1      GOBLIN  niv.1\n");
                                            printf("VIDA:   %d/12      VIDA:   %d/5 \n", vida1, vida4);
                                            printf("DEFESA: %d/2        DEFESA: %d/0 \n", def1, def4);
                                            printf("DANO:   %d/8        DANO:   %d/3 \n\n", dano1, dano4);
                                            
                                            printf("digite 1 para atacar\n");
                                            printf("digite 2 para defender\n");
                                            printf("digite 3 para fugir\n\n");
                                            scanf("%d", &acao);
                                            {
                                                // modo combate mago niv.1 vs goblin niv.1//
                                        
                                                if (acao == 1)
                                                {
                                                    vida4 = (vida4 + def4) - dano1;
                                                    vida4 = vida4 - def1;
                                                    printf("voce lança um feitiço de bola de fogo no inimigo...\n");
                                                    printf("\nMAGO    niv.1      GOBLIN  niv.1\n");
                                                    printf("VIDA:   %d/12      VIDA:  %d/5 \n", vida1, vida4);
                                                    printf("DEFESA: %d/2        DEFESA: %d/0 \n", def1, def4);
                                                    printf("DANO:   %d/8        DANO:   %d/3 \n", dano1, dano4);
                                                    scanf("%c", &enter);
                                                    {
                                                        printf("voce matou o GOBLIN niv.1...\n");
                                                        scanf("%c", &enter);
                                                        {
                                                            printf("voce recebe x pontos de XP");
                                                            scanf("%c", &enter);
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    if (acao == 2)
                                                    {
                                                        vida1 = vida1 + def1;
                                                        vida1 = vida1 - dano4;
                                                        vida1 = vida1 - def1;
                                                        printf("\nMAGO niv.1         GOBLIN niv.1\n");
                                                        printf("VIDA:   %d/12       VIDA:  %d/5 \n", vida1, vida4);
                                                        printf("DEFESA: %d/2        DEFESA: %d/0 \n", def1, def4);
                                                        printf("DANO:   %d/8        DANO:   %d/3 \n", dano1, dano4);
                                                        scanf("%c", &enter);
                                                        {
                                                            printf("voce levou uma pancada do GOBLIN niv.1...\n");
                                                            printf("o que voce vai fazer ?\n\n");
                                                            {
                                                                printf("\nMAGO    niv.1      GOBLIN  niv.1\n");
                                                                printf("VIDA:   %d/12      VIDA:   %d/5 \n", vida1, vida4);
                                                                printf("DEFESA: %d/2        DEFESA: %d/0 \n", def1, def4);
                                                                printf("DANO:   %d/8        DANO:   %d/3 \n\n", dano1, dano4);

                                                                printf("digite 1 para atacar\n");
                                                                printf("digite 2 para defender\n");
                                                                printf("digite 3 para fugir\n\n");
                                                                scanf("%d", &acao);
                                                            }
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if (acao == 3)
                                                        {
                                                            printf("voce fugiu sem deixar rastros...\n\n");
                                                        }
                                                        else
                                                        {
                                                            printf("codigo errado, fechando o jogo!");
                                                            return 0;
                                                        }
                                                    }
                                                }
                                                printf("olha aaqui !!!\n");
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    if (personagem == 2)
                    {
                        printf("\nvoce escolheu o guerreiro\n");
                        printf("voce possui 20 de vida e 6 de dano\n\n");
                        dano2 = 6;
                        vida2 = 20;
                        guerreiro = dano2 + vida2;
                        {
                            printf("\n\nok...\n\n");
                            scanf("%c", &enter);
                            {
                                printf("vamos começar esta historia, pressione enter para continuar...\n\n");
                                scanf("%c", &enter);
                                {
                                    printf("voce, um aventureiro nato que começa sua aventura na cidade de valleyson");
                                    scanf("%c", &enter);
                                    {
                                        printf("uma cidadezinha nao muito populoza com coisas bem simples de se fazer nela, como:");
                                        scanf("%c", &enter);
                                        {
                                            printf("ir pegar agua no poço, ordenhar as vacas, colher amoras nos campos de abedopark, sabe, essas coisas simples...");
                                            scanf("%c", &enter);
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        if (personagem == 3)
                        {
                            printf("\nvoce escolheu o arqueiro\n");
                            printf("voce possui 25 de vida e causa 4 de dano\n\n");
                            dano3 = 4;
                            vida3 = 25;
                            arqueiro = dano3 + vida3;
                            {
                                printf("\n\nok...\n\n");
                                scanf("%c", &enter);
                                {
                                    printf("vamos começar esta historia, pressione enter para continuar...\n\n");
                                    scanf("%c", &enter);
                                    {
                                        printf("voce, um aventureiro nato que começa sua aventura na cidade de valleyson");
                                        scanf("%c", &enter);
                                        {
                                            printf("uma cidadezinha nao muito populoza com coisas bem simples de se fazer nela, como:");
                                            scanf("%c", &enter);
                                            {
                                                printf("ir pegar agua no poço, ordenhar as vacas, colher amoras nos campos de abedopark, sabe, essas coisas simples...");
                                                scanf("%c", &enter);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            printf("caractere invalido!, fechando jogo...\n\n");
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}