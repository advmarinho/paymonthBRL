#include <stdio.h>

int main()
{
    float   SALBRUTO,
            INSS,
            IRRF,
            SALLIQ,
            BASEIRRF;
    int    OP;

    do          {
    printf("\n CALCULE SEU SALARIO, DIGITE\t  1 - PARA NOVO CALCULO\n\t");
    scanf(" %d", &OP);

    printf("\n DIGITE SEU SALARIO BRUTO: R$ \t");
    scanf("%f", &SALBRUTO);


    if  (SALBRUTO <= 1693.72)                           {INSS = SALBRUTO * 0.08;}              else if
        (SALBRUTO >= 1693.73 && SALBRUTO <= 2822.90)    {INSS = SALBRUTO * 0.09;}              else if
        (SALBRUTO >= 2822.91 && SALBRUTO <= 5646.80)    {INSS = SALBRUTO * 0.11;}              else if
        (SALBRUTO >  5646.81)                           {INSS =  621.04;}

    if  (SALBRUTO <= 1903.98)                           {IRRF = 0.00;}                         else if
        (SALBRUTO >= 1903.99 && SALBRUTO <= 2826.65)    {IRRF = SALBRUTO * 0.075 - (142.80);}  else if
        (SALBRUTO >= 2826.66 && SALBRUTO <= 3751.05)    {IRRF = SALBRUTO * 0.150 - (354.80);}  else if
        (SALBRUTO >= 3751.06 && SALBRUTO <= 4664.68)    {IRRF = SALBRUTO * 0.225 - (636.13);}  else if
        (SALBRUTO >  4664.69)                           {IRRF = SALBRUTO * 0.275 - (869.36);}


        SALLIQ = (SALBRUTO - INSS - IRRF);


    printf("\n DESCONTO INSS:.......R$ %f \n\t", INSS);

    printf("\n DESCONTO IRRF:.......R$ %f \n\t", IRRF);

    printf("\n SALARIO LIQUIDO:.....R$ %f \n\t", SALLIQ);

    printf("\n PERCENTUAL INSS %:...   %f \n\t", INSS / SALBRUTO);

    printf("\n PERCENTUAL IRRF %:...   %f \n\n\n\t", IRRF / SALBRUTO);


    switch(OP)  {
               case '0': //sair
                   printf("Escolheu sair do menu\n\t");
                   break;
               case '1': //novo calculo
                   printf("Escolheu opcao novo calculo\n\t");
                   break;
               default:
                   printf("###\tNovo calculo\t###\n\t");
                   break;
                }
                } while (OP != 0);

return 1;
}
