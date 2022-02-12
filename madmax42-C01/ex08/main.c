#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main()
{
	int tab[6] = {3, 4, 2, 7, 8, 5};
	int i = 0;

	ft_sort_int_tab(tab, 6);

	while (i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
}