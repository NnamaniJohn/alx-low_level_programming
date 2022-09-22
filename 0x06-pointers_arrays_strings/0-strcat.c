/**
 * _strcat - function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		*(dest + i + j) = src[j];
		j++;
	}

	return (dest);
}
