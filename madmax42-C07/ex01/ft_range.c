#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *matrix;
    int i;
    int range;

    if (min >= max)
    {
        matrix = NULL;
        return (matrix);
    }
    range = max - min;
    matrix =(int *) malloc(range * 4);
    i = -1;
    while (i++ < range)
        matrix[i] = min +i;
    return (matrix);
}

int		main(void)
{
	int	min;
	int	max;
	int	*matrix;
	int	i = 0;
	int	range;

	min = 23;
	max = 42;
	range = max - min;
	matrix = ft_range(min, max);
	while(i < range)
	{
		printf("%d, ", matrix[i]);
		i++;
	}
}
