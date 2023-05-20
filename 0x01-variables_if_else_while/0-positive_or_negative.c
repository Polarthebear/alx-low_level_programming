#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* *
 * betty stle doc
 * main - main function
 * program will get a random number assigned to the n variable and print the number telling the user if it is positive, negative or zero
 * Return 0 (success)
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Code goes here*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
