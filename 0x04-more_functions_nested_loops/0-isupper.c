
/**
 * _isupper - Character is Uppercase
 * @c: The number to be checked
 * Return: 1 if the letter is uppercase. 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
