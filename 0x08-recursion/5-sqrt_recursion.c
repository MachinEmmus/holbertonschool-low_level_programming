#include "holberton.h"
/**
* babilonic - return raiz r
* @n: numero
* @i: iterator
* Return: int
*/

int babilonic(int i, int n)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	return (babilonic((i + 1), n));
}

/**
* _sqrt_recursion - biseccion metodus
* @n: number
* Return: babilonic raiz
*/
int _sqrt_recursion(int n)
{
	return (babilonic(1, n));
}
