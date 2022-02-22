int ft_interative_power(int nb, int power)
{
    int n;

    n = nb;
    while (power > 1)
    {
        n *= nb;
        power--;
    }
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    return (n);
}

#include <stdio.h>

int main(void)
{
    printf("%i ", ft_interative_power(9, 2));
}