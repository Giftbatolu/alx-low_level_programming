/**
 * _atoi - function that convert string to integer
 * @s: The string
 *
 * Return: An iteger.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int set = 0;
	int b = 0;

	while (!(s[b] <= '9' && s[b] >= '0') && s[b] != '\0')
	{
		if (s[b] == '-')
			sign *= -1;
		b++;
	}
	while (s[b] <= '9' && (s[b] >= '0' && s[b] != '\0'))
	{
		set = (set * 10) + (s[b] - '0');
		b++;
	}
	set *= sign;
	return (set);
}
