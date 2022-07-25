#include <stdio.h>
#include <stdlib.h>

/**
 * Create a function that allows users to enter/guess random number three times
 * only. If their input guess number is correct, they should receive the reward.
 * If their guess is incorrect within the 3 times, they should exit saying:
 * "None of your input is correct".
 *
 * Return (0)
 */

int main()
{
	int guess1, guess2, guess3;

	printf("Are you a LUCKY WINNER? Try your luck today\n");
	printf("You can only guess 3 numbers. My first guess is: ");
	scanf("%d", &guess1);

	if (guess1 != 10)
	{
		printf("Your first guess number is incorrect\n");
		printf("Try your luck again! My second guess is: ");
		scanf("%d", &guess2);

		{
			if (guess2 != 10)
			{
				printf("Your second guess is incorrect\n");
				printf("Last chance to WIN A PRIZE! My third guess is: ");
				scanf("%d", &guess3);

				if (guess3 != 10)
				{
					printf("We're sorry but None of your guess is correct\n");
					printf("Try your LUCK again tomorrow");

					return (0);
				}
			}
		}
	}


	return (0);
}
