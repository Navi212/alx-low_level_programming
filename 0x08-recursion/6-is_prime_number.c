#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is
 * a prime number, otherwise 0
 * @n: input number
 *
 * Return: 1 on prime or 0 if otherwise
 */

int is_prime_number(int n)
{
	int a = 2;

	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (cal_prime(n, a));
}

/**
 * cal_prime - returns 1 if the input integer is a prime.
 *@num1: input value 1
 *@num2: input value 2
 *
 * Return: Return solution
 */
int cal_prime(int num1, int num2)
{
	if (num1 / 2 < num2)
		return (1);
	if (num1 % num2 == 0)
		return (0);
	return (cal_prime(num1, num2 + 1));
}
