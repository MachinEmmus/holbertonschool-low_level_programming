#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y;
srand(time(0));
n = rand() - RAND_MAX / 2;
n2 = n % 10;
if (n2 > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", x, y);
}
else if (n2 == 0)
{
<<<<<<< HEAD
printf("Last digit of %i is %i and is 0\n", n, n2);
=======
printf("Last digit of %d is %d and is 0\n", n, (n % 10));
}
else
{
printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));
>>>>>>> bee08351b3701d49564b36e243ae71a90c6155c8
}
else
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n2);
return (0);
}
