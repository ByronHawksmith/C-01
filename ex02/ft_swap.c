void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h>
int	main(void)
{
	int a;
	int b;

	a = 4;
	b = 2;
	printf("Before a: %d\n", a);
	printf("Before b: %d\n", b);
	ft_swap(&a, &b);
	printf("After a: %d\n", a);
	printf("After b: %d\n", b);
}
*/
