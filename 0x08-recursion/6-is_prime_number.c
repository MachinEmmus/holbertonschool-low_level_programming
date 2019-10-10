#include "holberton.h"

/**
* primo - Primo funtion
* @n: number
* @d: divisor
* Return: Is Primo?
*/

int primo(int n, int d)
{
	if (d >= n)
	{
		return (1);
	}
	if ((n % d) == 0)
	{
		return (0);
	}
	return (primo(n, d + 1));

}

/**
* is_prime_number - return to raiz
* @n: number parametrer
* Return: int
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (primo(n, 2));
	}
}
