#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char src[] = " saopaulo";
	char dest[] = "42";
	printf("%s", ft_strncat(dest, src, 9));
}
