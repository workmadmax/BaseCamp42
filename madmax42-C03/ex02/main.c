#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char src[] = "Palmeiras";
	char dest[] = "Tri Campeao";
	printf("%s\n", ft_strcat(dest, src));
}