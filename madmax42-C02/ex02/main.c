#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
	printf(" teste full caractere: %d\n ", ft_str_is_alpha("abcdefghijlmnopqrstuvwyxz"));
	printf(" teste com numero: %d\n ", ft_str_is_alpha("abcdefghi123jlmnopq"));
	printf(" teste void: %d\n", ft_str_is_alpha(""));
}