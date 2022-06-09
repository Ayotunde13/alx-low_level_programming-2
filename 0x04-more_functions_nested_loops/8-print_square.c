/**
 * print_square - Function prototype
 * Description: Prints a square of the specified size
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int r;

		for (r = 0; r < size; r++)
		{
			int c;

			for (c = 0; c < size; c++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
