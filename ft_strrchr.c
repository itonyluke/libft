char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*str;

	index = 0;
	str = (char *)s;
	while (str[index] != '\0')
		index++;
	while (index >= 0)
	{
		if (str[index] == c)
			return (&str[index]);
		index--;
	}
	return (0);
}
