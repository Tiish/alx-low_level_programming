/**
 * _atoi - Converts a string to an integer.
 * @s: String to convert.
 *
 * Return: The integer representation of the string.
 */
int _atoi(char *s)
{
	int sign = 1, result = 0, i = 0;

	/* Skip over any leading non-digit characters */
	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			sign = sign * -1;
		i++;
	}

	/* Process each digit character */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return sign * result;
}
