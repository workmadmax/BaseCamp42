#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	char s1[] = "batata";
	char s2[] = "batata";

	if (ft_strcmp(s1, s2) == 0)
		printf(" Equals ");
	else if (ft_strcmp(s1, s2) < 0)
		printf("A primeira é maior ");
	else if (ft_strcmp(s1, s2) > 0)
		printf("A segunda é maior ");
	return (0);
}