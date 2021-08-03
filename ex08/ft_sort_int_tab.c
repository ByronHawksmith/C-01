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
	while (i < size - 1)
	{
		j = 0;
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
	int arr[] = 
	{
		-2405,
		-1886,
		3161,
		2884,
		-3667,
		-3034,
		3006,
		3396,
		-1455,
		3846
	};
	
	printf("%s", "Before: ");
	print_int_helper(arr, 10);
	
	printf("%s", "\n");

	ft_sort_int_tab(arr, 10);

	printf("%s", "After: ");
	print_int_helper(arr, 10);
}
*/
