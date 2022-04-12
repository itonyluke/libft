int		ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	atoi;

	index = 0;
	sign = 1;
	atoi = 0;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		atoi = (atoi * 10) + (str[index] - '0');
		index++;
	}
	return (atoi * sign);
}
