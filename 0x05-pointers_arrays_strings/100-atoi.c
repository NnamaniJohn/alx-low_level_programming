/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */

int _atoi(char *s)
{
	int len;
	int is_negative = -1;
	int num = 0;

	for (len = 0; *(s + len); len++)
	{
		if (*(s + len) >= '0' && *(s + len) <= '9')
		{
			num *= 10;
			num = num - (*(s + len) - '0');
		}
		else
		{
			if (num != 0)
				break;
			if (*(s + len) == '-')
				is_negative *= -1;
		}
	}
	num *= is_negative;
	return (num);
}
