#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>
#include <unistd.h>


int random_number();

int main (void)
{
	int guess;
	int life;
	int randomNumber;
	int banner;
	FILE *file;
	file = fopen("bannerGame.txt", "r");
	if (file)
	{
    		while ((banner = getc(file)) != EOF)//EOF = end of file
        		printf("%c", banner);
    		fclose(file);
	}

	randomNumber = random_number();
	printf("\nGuess a number between 1 and 100!\n");
	printf("You have a 10 try to guess!\n");

	printf("Number: ");
	scanf("%d", &guess);


	life = 10;
	while (guess != randomNumber && life > 0)
	{
		if (guess > randomNumber)
		{
			printf("Lower number please!\n");
		}
		else
		{
			printf("Higher number please! \n");
		}
		printf("Digit another number: ");
			scanf("%d", &guess);
		life--;
	}

	if (life > 0 && guess == randomNumber)
		printf("Congratulations! \n");
	else
		printf("Congratulations, you lose \n");
}

int random_number()
{
	int index;
	int random;

	index = 0;
	random = 0;
	srand(time(NULL));
	while(index < 1)
	{
		random = rand() % 100;
		index++;
	}
	return(random);
}
