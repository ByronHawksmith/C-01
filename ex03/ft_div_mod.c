void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int temp;
	int temp2;

	a = 10;
	b = 5;
	temp = 0;
	temp2 = 0;
	int *div = &temp;
	int *mod = &temp2;
	ft_div_mod(a, b, div, mod);

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("div: %d\n", *div);
	printf("mod: %d", *mod);
}
*/
