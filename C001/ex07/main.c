#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	int tab[56] = {1, 2, 3, 4, 5, 6};
	int i = 0;

	ft_rev_int_tab(tab, 5);

	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
}