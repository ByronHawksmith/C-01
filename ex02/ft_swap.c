void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	printf("a: %d\n", *a);
	printf("b: %d", *b);
}

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
