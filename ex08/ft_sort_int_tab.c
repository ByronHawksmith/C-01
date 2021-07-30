void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
void	print_int_helper(int *arr, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		if (i != 0)
			printf("%s", ",");
		printf("%d", arr[i]);
		i++;
	}
}

int	main(void)
{
	int arr[5] = {15, 7, 86, 33, 55};
	
	printf("%s", "Before: ");
	print_int_helper(arr, 5);
	
	printf("%s", "\n");

	ft_sort_int_tab(arr, 5);

	printf("%s", "After: ");
	print_int_helper(arr, 5);
}
*/
