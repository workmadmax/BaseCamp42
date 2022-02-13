#include <stdio.h>

char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);

int main()
{
	char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	printf("%s ", ft_strcapitalize(str));
}