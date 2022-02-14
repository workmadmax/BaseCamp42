#include <stdio.h>

int ft_strlen(char *str);
unsigned ft_strlcpy(char *dest, char *src, unsigned int size);


int main()
{
	char src[] = "palmeiras";
	char dest[] = "amendobobo";

	printf("%d\n | %s\n ", ft_strlcpy(dest, src, 10), dest);
}