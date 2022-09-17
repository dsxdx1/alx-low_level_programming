#include "main.h"
/**
 * _abs - gets the absolute value
 * int: takes an int as the argument
 * Return: returns an int.
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r == 0)
	{
		return (r);
	}
	else
	{
		r *= -1;
		return (r);
	}

}
