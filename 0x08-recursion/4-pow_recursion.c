#include "main.h"

/**
 * _pow_recursion - returns the sum
 *
 * _pow_recursion - same as above
 *
 * @x: value
 *
 * @y: to the power
 *
 * Returns: always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));/*CC*/
/*tot die mag*/
}
