#include "holberton.h"
/**
 *is_prime_number - determines if a number is a prime number
 *@n: number to be checked
 *Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int div;

	div = 2;
	div = calc(n, div);
	return (div);
}
/**
 *calc - Calculates if a number is prime
 *@n: Number to check if prime
 *@div: counter for prime
 *Return: 1 if prime 0 is not prime
 */
int calc(int n, int div)
{
	/*It is prime*/
	if (n == div)
		return (1);
	/*Not prime*/
	if (n % div == 0 || n <= 1)
		return (0);

	return (calc(n, div + 1));
}
