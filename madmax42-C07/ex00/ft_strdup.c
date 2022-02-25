#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int     i;
    int     size;
    char    *dest;

    i = 0;
    size = ft_strlen(src);
    dest = (char *) malloc (sizeof (*dest) * (size) );
    while (i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int		main(void)
{
	char	*str;
	char	*dest;

	str = "madmax42 with malloc()";
	printf("copied    : alloc : $%s$ // %p\n", dest, dest);
	dest = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ // %p\n", dest, dest);
}
