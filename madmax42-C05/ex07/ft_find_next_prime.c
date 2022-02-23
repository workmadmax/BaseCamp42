int ft_prime(int nb)
{
    int i;

    i = 2;
    if (nb < 2)
        return (0);
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb < 2)
        return (2);
    while (nb >= 2)
    {
        if (ft_prime(nb) == 1)
            return (nb);
        nb++;
    }
    return (0);
}

#include <stdio.h>

int main()
{
    int n;
    int next_prime;

    n = 7;
    next_prime = ft_find_next_prime(n);

    printf(" The next prime %d ", next_prime);  
}
