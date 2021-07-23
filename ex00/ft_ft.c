#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ft(int *nbr)
{
	int	n;

	*nbr = 42;
	n = *nbr;
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

/*
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
*/

int	main(void)
{
	int	number;	

	number = 100;
	ft_ft(&number);
}
