/**
 * _isalpha - Check if a number is greater than 0
 * @c: The number to be checked
 *
 * Return: 1 if the number is letter. 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
