#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	printf(" Tudo minusculo : %d\n ", ft_str_is_uppercase("abcdefghi"));
	printf(" Misturado : %d\n ", ft_str_is_uppercase("ABCDE"));
	printf(" Void : %d\n ", ft_str_is_uppercase(""));
}
