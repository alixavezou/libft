#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	main()
{
	int	c;

	c = "11";
	printf("bravo %d", ft_isdigit(c));
}
