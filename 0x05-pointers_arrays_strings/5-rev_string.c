/**
* rev_string - invert the string
* @s: Strign and Pointer
* Return: Void.
*
*/
void rev_string(char *s)
{
int i = 0;
int j = 0;
int x;
	while (*(s + i) != 0)
		i++;
	if ((i % 2) == 0)
		x = (i / 2);
	else
		x = (i / 2) + 1;
	i--;
	while (i >= x)
	{
		char c  = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = c;
		j++;
		i--;
	}
}
