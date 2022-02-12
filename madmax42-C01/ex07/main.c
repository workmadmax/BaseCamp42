#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	int tab[6] = {1, 2, 3, 4, 5, 6};
	int i = 0;

	ft_rev_int_tab(tab, 6);

	while (i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
}