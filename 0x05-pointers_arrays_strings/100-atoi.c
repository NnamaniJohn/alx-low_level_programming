int _atoi(char *s)
{
	int len;
	int is_negative = 0;
	int num = 0;

	for(len = 0; *(s + len); len++)
	{
		if(*(s + len) >= 48 && *(s + len) <= 58)
		{
			num *= 10;
			num = num + (*(s + len) - 48);
		} 
		else
		{
			if(num != 0)
				break;
			if(*(s + len) == '-')
				is_negative = 1;
			else
				is_negative = 0;
		}
	}
	if(is_negative)
		num *= -1;
	return num;
}
