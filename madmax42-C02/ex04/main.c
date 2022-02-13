#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main()
{
	printf(" Tudo minusculo : %d\n ", ft_str_is_lowercase("abcdefghi"));
	printf(" Misturado : %d\n ", ft_str_is_lowercase("abcdefGHI"));
	printf(" Void : %d\n ", ft_str_is_lowercase(""));
}