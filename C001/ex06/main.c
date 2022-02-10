#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str = "Palmeiras Tri Campeão das Américas";
	int	size;

	size = ft_strlen(str);
	printf("str=%s\nstrlen=%d\n", str, size);
	return 0;
}