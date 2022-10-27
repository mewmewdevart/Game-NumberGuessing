#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int index;
	printf("Gerando 10 valores aleatorios! \n");

	index = 0;
	while(index < 10)
	{	
		printf("%d ", rand() % 100);
		index++;
	}
	return (0);
}
