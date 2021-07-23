#include <unistd.h>

/*
void	ft_swap(int *a, int *b)
{
	int	tmp;
	char a_char;
	char b_char;

	tmp = *a;
	*a = *b;
	*b = tmp;

	a_char = *a + '0';
	b_char = *b + '0';
	
	write(1, &a_char, 1);
	write(1, &b_char, 1);
}
*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int	main(void)
{
	int a_val = 4;
	int b_val = 2;
	int *a;
	int *b;

	a = &a_val;
	b = &b_val;

	ft_swap(a, b);
}
*/

// Not allowed
/*
	int *c;
	int *d;

	*c = 4;
	*d = 2;
*/
