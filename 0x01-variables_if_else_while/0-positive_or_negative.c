#include <stdlib.h>
#include <time.h>
/*Apparently more headers go here*/

/*Betty style doc for function main goes here*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Code goes here*/
	if (n > 0)
	{
		printf("%d is positive\n");
	}
	else if (n < 0)
	{
		printf("%d is negative\n");
	}
	else
	{
		printf("%d is zero\n");
	}
	return (0);
}
