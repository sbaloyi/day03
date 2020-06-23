int ft_atoi(char *str);

int ft_atoi(char *str) 
{
	int result = 0;
	int sing = 1;
	int counter = 0;

	if (str[0] == '-') 
	{
		sign = -1;
		i++;
	}

	while (str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}
