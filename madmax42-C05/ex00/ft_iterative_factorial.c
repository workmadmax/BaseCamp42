#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    unsigned int    fact;

    fact = 1;
    while (nb >0)
    {
        fact *= nb;
        --nb;
    }
    if (nb < 0)
    {
        return (0);
    }
    return (fact);
}

int main (void)
{
    printf("%i ", ft_iterative_factorial(3));
}