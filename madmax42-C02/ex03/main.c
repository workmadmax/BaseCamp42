#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main()
{
	printf(" Somente Numeros : %d\n ", ft_str_is_numeric("0123456789"));
	printf(" Numeros e letras : %d\n ", ft_str_is_numeric("0123max4567"));
	printf(" Void : %d\n", ft_str_is_numeric(""));
}