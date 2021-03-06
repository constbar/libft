#include "../libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					f;
	unsigned long int	r;

	i = 0;
	r = 0;
	f = 1;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			f = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
		if (r > 2147483647 && f == 1)
			return (-1);
		if (r > 2147483648 && f == -1)
			return (0);
	}
	return (r * f);
}
