void	ft_ultimate_div_mod(int *a, int *b)
{
	int	*tmp;

	*tmp = *a / *b;
	*b = *a % *b;
	*a = *tmp;
}

/*
#include <stdio.h>
int	main()
{
	int a;
	int b;

	a = 11;
	b = 5;
	printf("Before a: %d\n", a);
	printf("Before b: %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("After a: %d\n", a);
	printf("After b: %d", b);
}
*/
