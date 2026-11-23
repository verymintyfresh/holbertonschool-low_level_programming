#include "main.h"

/**
 * _sqrt_recursion - Calculates the square root of a number
 * @n: the number
 * Return: sqrt(n), if n is a square number, or -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);

	sqrt = _sqrt_helper(0, n, n);
	if (sqrt * sqrt == n) /* exact */
		return (sqrt);
	else
		return (-1); /* not exact */
}

/**
 * _sqrt_helper - Makes guesses as to the square root of a number
 * @low: current lower bound
 * @high: current upper bound
 * @n: the number
 * Return: sqrt(n)
 */
int _sqrt_helper(int low, int high, int n)
{
	int mid;

	if (low <= high)
	{
		mid = (low + high) / 2;

		if ((mid * mid <= n) && ((mid + 1) * (mid + 1)) > n)
		{		/* guess is 'close enough' */
			return (mid);
		}

		if (mid * mid < n)
			return (_sqrt_helper(mid + 1, high, n));
		else
			return (_sqrt_helper(low, mid - 1, n));
	}
	return (low);
}
