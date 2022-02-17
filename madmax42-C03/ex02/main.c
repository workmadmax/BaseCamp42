#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char src[] = " Palmeiras";
	char dest[50] = "Tri Campeao";
	printf("%s\n", ft_strcat(dest, src));
}