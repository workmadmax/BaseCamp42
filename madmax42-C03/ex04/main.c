#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char str[] = "Palmeiras Campeao";
	char find[] = "meiras";

	printf("%s", ft_strstr(str, find));
}
