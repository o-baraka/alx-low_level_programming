#include <time.h>
/**
 * main -generate random numbers to detect -ve or +ve
 *
 * Return: always (0)
 *
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("5d is zero\n", n);
}
else
{
	printf("%d is negative\n");
}
return (0);
}
