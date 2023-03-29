/**
 * _strlen - helper function to retuirn length of a string.
 * @s: string
 * Return: length of string (int)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
