#include<stdio.h>
#include<conio.h>
/*
Nome da fun��o: multiplica
recebe como par�metos dois valores inteiros (N1,N2)
objetivo: multiplicar os valores recebidos nos par�metros.
retorno: um par�metro inteiro (res) contendo o resultado
*/
int multiplica(int G, int j) //multiplica recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = G * j;
  return(resultado); //retornando o valor para main
}
/******************* fun��o principal (main) *********************/
int main(void)
{
  int V1, V2, resultado;
  printf("Digite o primeiro valor:");
  scanf("%d", &V1);
  printf("Digite o segundo valor:");
  scanf("%d", &V2);
  
  //chama a fun��o e recebe o retorno
  resultado = multiplica(V1,V2);
  
  printf("Resultado = %d\n", resultado);
  
  getch();
  return 0;
}
