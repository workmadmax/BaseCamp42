#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	printf(" Variados : %d\n ", ft_str_is_printable("ABCDEFGHIJ?#$%"));
	printf(" Caracter pedidos : %d\n ", ft_str_is_printable("\n\t\v\f"));
}