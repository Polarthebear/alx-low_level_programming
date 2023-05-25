#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

<<<<<<< HEAD
        while (i < 10)
        {
                putchar(i);
        }
=======
       /** while (i < 10)
        {
                putchar(i);
        }*/
>>>>>>> 1d201842a2e5f99af31095a2afa3b317e561badd

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
