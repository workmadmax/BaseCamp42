#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
	char src[] = "palmeiras";
	char dest[] = "madmax123";

	printf("BEFORE : %s\n", dest);

	printf("After : %s\n ", ft_strcpy(dest, src));
}