#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, calc; // numero digitado pelo usuario
    int yn, i;  // resposta do usuario se deseja continuar
    printf("DIGITE UM NUMERO: ");
    scanf("%f", &b);
    printf("DESEJA DIGITAR OUTRO NUMERO? SE SIM DIGITE 1, SE NAO DIGITE 0: ");
    scanf("%i", &yn);
    i = 1;
    while(yn == 1)
    {
        printf("DIGITE OUTRO NUMERO: ");
        scanf("%f", &a);
        b = b+a;
        yn = 0;
        printf("DESEJA DIGITAR OUTRO NUMERO? SE SIM DIGITE 1, SE NAO DIGITE 0: ");
        scanf("%i", &yn);
        i++;
    }
    calc = b/i;
    printf("CALCULO FINAL DA MEDIA: %f, QUANTIDADE DE NUMEROS FINAIS: %i ",calc, i);
    return 0;
}
//lucasleite.ds@gmail.com
