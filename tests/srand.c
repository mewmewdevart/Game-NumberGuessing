#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	int index;
	printf("Gerando 10 valores aleatorios: \n");
	  /* srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
	   com o valor da função time(NULL). Este por sua vez, é calculado
	   como sendo o total de segundos passados desde 1 de janeiro de 1970
	   até a data atual.
		Desta forma, a cada execução o valor da "semente" será diferente.
  	*/
	srand(time(NULL));
	index = 0;
	while(index < 10)
	{
		// gerando valores aleatórios na faixa de 0 a 100
		printf("%d ", rand() % 100);
		index++;
	}
	return(0);
}
