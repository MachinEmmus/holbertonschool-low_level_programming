/**
 * _isdigit - Character is Digit
 * @c: The number to be checked
 * Return: 1 if the char is digit. 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
