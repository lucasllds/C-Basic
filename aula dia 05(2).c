#include <stdio.h>
#include <stdlib.h>

int main()
{
	// CODIGO COMENTADO!
	// AQUI SAO CRIADOS TRES VARIAVEIS 'A' 'B' E 'CALC' CALC E A MEDIA, B E O TOTAL, A E A ADIÇÃO A B!
    float a, b, calc;
    // DUAS VARIAVEIS CRIADAS YN E I, YN = YES OR NO OU 1 OU 0, I QUANTIDADE DE NUMEROS DIGITADOS PELO USUARIO
    int yn, i;
    // MOSTRA NA TELA, EM SEGUIDA CAPTURA VALORES DIGITADO DO TECLADO PELO USUARIO
    printf("DIGITE UM NUMERO: ");
    scanf("%f", &b);
    printf("DESEJA DIGITAR OUTRO NUMERO? SE SIM DIGITE 1, SE NAO DIGITE 0: ");
    scanf("%i", &yn);
    // FOR LANÇO DE REPETIÇÃO, ENQUANTO A VARIAVEL YN FOR 1, OU MELHOR ENQUANTO USUARIO APERTAR 1 P
    // ACONTECERA ESSA REPETIÇÃO DE CODIGO
    for(i=1; yn==1; i++)
    {
        printf("DIGITE OUTRO NUMERO: ");
        scanf("%f", &a);
        b = b+a;
        yn = 0;
        printf("DESEJA DIGITAR OUTRO NUMERO? SE SIM DIGITE 1, SE NAO DIGITE 0: ");
        scanf("%i", &yn);
    }
    //CALC B/I, ONDE B E O TOTAL, É I E A QUANTIDADE DE NUMEROS DADO
    calc = b/i;
    printf("CALCULO FINAL DA MEDIA: %f, QUANTIDADE DE NUMEROS FINAIS: %i \n\n",calc, i);
    system("PAUSE");
    return 0;
}
