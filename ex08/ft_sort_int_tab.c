void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	middle;

	i = 0;
	middle = size / 2;
	while (i < middle)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int arr[5] = {1,2,3,4,5};
	
	printf("%d\n", arr[0]);
	ft_rev_int_tab(arr, 5);
	printf("%d", arr[0]);
}
*/
