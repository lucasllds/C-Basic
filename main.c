#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
/*
int main()
{
    FILE *fp;
    int i=2;
    float x=3;
    fp=fopen("abc.txt","w");
    fprintf(fp,"%d%f\n",i,x);
    fscanf(fp,"%d %f", &i,&x);
    fclose(fp);
    if(!fp){
        printf("erro ao abrir.");
    }
    printf("Hello world!\n");
    return 0;
}*/
/*int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   char *comandos, int Visualizacao)
{
  MessageBox(NULL, "Alô Mundo!", "Sem Título", MB_OK);
  return 0;
}*/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                  char *comandos, int Visualizacao)
{
  int botao;

  botao = MessageBox(NULL, "Instruções em Português?",
          "Ajuda", MB_YESNO + MB_ICONQUESTION);

  if (botao==IDYES)
     MessageBox(NULL, "Aperte OK para finalizar",
               "Instruções", MB_OK + MB_ICONEXCLAMATION);

  if (botao==IDNO)
     MessageBox(NULL, "Press OK to exit",
               "How to use", MB_OK + MB_ICONEXCLAMATION);

  return 0;
}
