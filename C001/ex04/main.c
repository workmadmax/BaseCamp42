#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;

	a = calloc(1, sizeof(int));
	b = calloc(1, sizeof(int));
	*a = 42;
	*b = 10;

	printf("div: %d \n ", *a);
	ft_ultimate_div_mod(a, b);
	printf("mod: %d \n ", *b );
	return 0;
}
