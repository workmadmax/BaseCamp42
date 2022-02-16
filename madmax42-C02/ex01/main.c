#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char src[] = "franca";
	char dest[] = "brasil";

	// printf("%s ", ft_strncpy(dest, src, 3));
	// printf("\n%s", strncpy(dest1, src, 3));
	// printf("\n%s", ft_strncpy(dest, src, 5));
	// printf("\n%s", strncpy(dest1, src, 5));
	// printf("\n%s", ft_strncpy(dest, src, 7));
	printf("%s\n", strncpy(dest, src, 4));
}
