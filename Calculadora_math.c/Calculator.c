#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <math.h>

/* O programa consiste em criar muitas possibilidade de se calcular numeros, o usuario escolhe que tipo
de calculo sera escolhido, nisso escolhe-se qunatos numeros ira digitar e que tipo de operacao ira fazer

- 1 matematica basica;
- 2 Equacoes;
- 3 geometria;
- 4 progressao aritmetica e geometrica;
- 5 porcentagem;
- 6 funções;
(...) */

// intro do programa
void lobby(void)
{
    printf("----------------------------------\n");
    printf("|                                |\n");
    printf("|          Bem                   |\n");
    printf("|                                |\n");
    printf("|                                |\n");
    printf("|                                |\n");
    printf("----------------------------------\n");
    sleep(1);
    system("clear");
    printf("----------------------------------\n");
    printf("|                                |\n");
    printf("|          Bem vindo             |\n");
    printf("|                                |\n");
    printf("|                                |\n");
    printf("|                                |\n");
    printf("----------------------------------\n");
    sleep(1);
    system("clear");
    printf("----------------------------------\n");
    printf("|                                |\n");
    printf("|          Bem vindo ao          |\n");
    printf("|                                |\n");
    printf("|                                |\n");
    printf("|                                |\n");
    printf("----------------------------------\n");
    sleep(1);
    system("clear");
    printf("----------------------------------\n");
    printf("|                                |\n");
    printf("|          Bem vindo ao          |\n");
    printf("|         Calculator             |\n");
    printf("|                                |\n");
    printf("|                                |\n");
    printf("----------------------------------\n");
    sleep(1);
    system("clear");
    printf("----------------------------------\n");
    printf("|                                |\n");
    printf("|          Bem vindo ao          |\n");
    printf("|         Calculator Math        |\n");
    printf("|                                |\n");
    printf("|                                |\n");
    printf("----------------------------------\n");
    sleep(1);
    system("clear");
    printf("----------------------------------\n");
    printf("|                                |\n");
    printf("|          Bem vindo ao          |\n");
    printf("|         Calculator Math        |\n");
    printf("|              1.0               |\n");
    printf("|                                |\n");
    printf("----------------------------------\n");
    sleep(1);
}

//////////////////////////// Matematica basica /////////////////////////////
float mathbasic()
{
    float x, y, result;
    int math;
    system("clear");
    printf("Você escolheu [Matematica Básica]\n");
    sleep(1);
    printf("Digite dois operandos\n\n");
    scanf("%f", &x);
    scanf("%f", &y);

    printf("\nEscolha que tipo de operação deseja fazer:\n\n");
    printf("Digite 1 para soma\n");
    printf("Digite 2 para subtração\n");
    printf("Digite 3 para multiplicação\n");
    printf("Digite 4 para divisão\n\n");

    scanf("%d", &math);
    switch (math)
    {
    case 1:
        result = x + y;
        break;
    case 2:
        result = x - y;
        break;
    case 3:
        result = x * y;
        break;
    case 4:
        result = x / y;
        break;
    default:
        system("clear");
        printf("Operação indisponivel!\n");
        sleep(2);
        return mathbasic();
        break;
    }
    return result;
}

//////////////////////////// Equacoes de 1 e 2 grau ////////////////////////////
float equacoes()
{
    int math, estrutura;
    float x, y, z;
    float a, b, c;
    system("clear");
    printf("Você escolheu [Equações]\n");
    sleep(1);
    printf("Escolha o tipo de equação que deseja fazer: \n\n");
    printf("Digite 1 para Equação do 1 grau\n");
    printf("Digite 2 para Equação do 2 grau\n");
    printf("Em breve (...)\n\n");

    scanf("%d", &math);
    switch (math)
    {
    case 1:
        system("clear");
        printf("Qual estrutura deseja fazer o calculo?\n\n");
        printf("Digite 1 para expressão x + b = a\n");
        printf("Digite 2 para expressão x + b + c = a\n");
        printf("Digite 3 para expressão 2x = a\n");
        printf("Digite 4 para expressão 2x + b = a\n");
        printf("Digite 5 para expressão 2x + b + c = a\n");
        printf("Em breve (...)\n\n");

        scanf("%d", &estrutura);
        switch (estrutura)
        {
        case 1:
            system("clear");
            printf("Expressão x + b = a\n");
            printf("Digite os valores de a e b: \n\n");
            scanf("%f", &a);
            scanf("%f", &b);
            x = a - b;
            return x;
            break;
        case 2:
            system("clear");
            printf("Expressão x + b + c = a\n");
            printf("Digite os valores de a, b e c: \n\n");
            scanf("%f", &b);
            scanf("%f", &a);
            scanf("%f", &c);
            x = a - b - c;
            return x;
            break;
        case 3:
            system("clear");
            printf("Expressão 2x = a\n");
            printf("Digite o valor de a: \n\n");
            scanf("%f", &a);
            x = a / 2;
            return x;
            break;
        case 4:
            system("clear");
            printf("Expressão 2x + b = a\n");
            printf("Digite os valores de a e b: \n\n");
            scanf("%f", &a);
            scanf("%f", &b);
            x = (a - b) / 2;
            return x;
            break;
        case 5:
            system("clear");
            printf("Expressão 2x + b + c = a\n");
            printf("Digite os valores de a, b e c: \n\n");
            scanf("%f", &a);
            scanf("%f", &b);
            scanf("%f", &c);
            x = (a - b - c) / 2;
            return x;
            break;

        default:
            system("clear");
            printf("Operação indisponivel!\n\n");
            sleep(2);
            return equacoes();
            break;
        }
        break;
    case 2:
        system("clear");
        printf("Qual estrutura deseja fazer o calculo?\n\n");
        printf("Digite 1 para expressão ax² + bx = 0\n");
        printf("Digite 2 para expressão ax² + bx + c = 0\n");
        printf("Digite 3 para expressão 2x² + bx = 0\n");
        printf("Digite 4 para expressão 2x² + bx + c = 0\n");
        printf("Digite 5 para expressão 2x² + bx = 0\n");
        printf("Em breve (...)\n\n");
        float x1, x2, delta;

        scanf("%d", &estrutura);
        switch (estrutura)
        {
        case 1:
            system("clear");
            printf("Expressão ax² + bx = 0\n");
            printf("Digite os valores de a e b\n\n");
            scanf("%f", &a);
            scanf("%f", &b);
            c = 0;
            delta = sqrt((b * b)-4 * a * c);
            x1 = -(b)+(delta)/(2 * a);
            x2 = -(b)-(delta)/(2 * a); 
            printf("\nx1 =  %.2f\n", x1);
            printf("x2 =  %.2f\n", x2);
            sleep(2);
            return 0;
            break;
        case 2:
            system("clear");
            printf("Expressão ax² + bx + c = 0\n");
            printf("Digite os valores de a, b e c\n\n");
            scanf("%f", &a);
            scanf("%f", &b);
            scanf("%f", &c);
            delta = sqrt((b * b)-4 * a * c);
            x1 = (-(b)+(delta))/(2 * a);
            x2 = (-(b)-(delta))/(2 * a); 
            printf("\nx1 =  %.2f\n", x1);
            printf("x2 =  %.2f\n", x2);
            sleep(2);
            return 0;
            break;
        case 3:
            system("clear");
            break;
        case 4:
            system("clear");
            break;
        case 5:
            system("clear");
            break;

        default:
            break;
        }
        break;
    default:
        system("clear");
        printf("Operação indisponivel!\n\n");
        sleep(2);
        return equacoes();
        break;
    }
    return 1;
}

///////////////////////////// Geometria ////////////////////////////
float geometria()
{
    int math;
    float x, y, z, result;
    system("clear");
    printf("Você escolheu [Geometria]\n");
    sleep(1);
    printf("Escolha que tipo de operação deseja fazer:\n\n");
    printf("Digite 1 para Area do quadrado\n");
    printf("Digite 2 para Area do triangulo\n");
    printf("Digite 3 para Area do retangulo\n");
    printf("Digite 4 para Area do trapezio\n");
    printf("Em breve (...)\n\n");

    scanf("%d", &math);
    switch (math)
    {
    case 1:
        system("clear");
        printf("Digite o valor (na ordem) dos lados do quadrado:\n");
        scanf("%f", &x);
        scanf("%f", &y);
        result = x * y;
        return result;
        break;
    case 2:
        system("clear");
        printf("Digite o valo (na ordem) da base e da altura do triangulo:\n\n");
        scanf("%f", &x);
        scanf("%f", &y);
        result = (x * y) / 2;
        return result;
        break;
    case 3:
        system("clear");
        printf("Digite o valor (na ordem) da base e da altura do retangulo:\n\n");
        scanf("%f", &x);
        scanf("%f", &y);
        result = x * y;
        return result;
        break;
    case 4:
        system("clear");
        printf("Digite o valor (na ordem) da Base(B), base(b) e a altura do trapezio:\n\n");
        scanf("%f", &x);
        scanf("%f", &y);
        scanf("%f", &z);
        result = ((x + y) * z) / 2;
        return result;
    default:
        system("clear");
        printf("Operação indisponivel!\n\n");
        sleep(2);
        return geometria();
        break;
    }
    return result;
}

//////////////////////////// Progressoes aritimeticas e geometrica ////////////////////////////
float progressoes()
{
    system("clear");
    printf("Em manutenção!\n");
    sleep(2);
    system("clear");
    return 0;
}

//////////////////////////// Porcentagem ////////////////////////////
float porcentagem()
{
    system("clear");
    printf("Em manutenção!\n");
    sleep(2);
    system("clear");
    return 0;
}

//////////////////////////// funcoes ////////////////////////////
float funcoes()
{
    system("clear");
    printf("Em manutenção!\n");
    sleep(2);
    system("clear");
    return 0;
}

//////////////////////////// PRINCIPAL !!!! ////////////////////////////
int main()
{
    int num1;
    float result;
    setlocale(LC_ALL, "Portuguese");
    lobby();
    printf("Bem vindo, espero que goste da experiência :)\n\n");
    sleep(2);
    system("clear");

    while (1)
    {
        printf("----------------------------------\n");
        printf("|                                |\n");
        printf("|         Calculator Math        |\n");
        printf("|              1.0               |\n");
        printf("|                                |\n");
        printf("----------------------------------\n\n");
        printf("Escolha dentre as operação abaixo de 1 a 6 as que gostaria fazer:\n\n");
        printf("Digite 1 para [Matemática Básica]\n");
        printf("Digite 2 para [Euquações - 1 e 2 grau]\n");
        printf("Digite 3 para [Geometria]\n");
        printf("Digite 4 para [Prograssoes aritmética e geométrica]\n");
        printf("Digite 5 para [Porcentagem]\n");
        printf("Digite 6 para [Funções]\n\n");
        printf("Se quiser sair do programa, digite 0 para sair...\n\n");
        scanf("%d", &num1);
        switch (num1)
        {
        case 1:
            system("clear");
            printf("\nResultado = %.2f\n\n", mathbasic(result));
            sleep(1);
            break;
        case 2:
            system("clear");
            printf("\nResultado = %.2f\n\n", equacoes(result));
            sleep(1);
            break;
        case 3:
            system("clear");
            printf("\nResultado = %.2f\n\n", geometria(result));
            sleep(1);
            break;
        case 4:
            progressoes();
            break;
        case 5:
            porcentagem();
            break;
        case 6:
            funcoes();
            break;
        case 0:
            system("clear");
            printf("Espero que tenha gostado, volte sempre <3...\n");
            sleep(2);
            return 0;
        default:
            printf("Número escolhido inválido!\n");
            return 1;
            break;
        }
    }
    return 0;
}