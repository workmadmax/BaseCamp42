int ft_is_prime(int nb)
{
    int i;

    i = 2;
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (nb > 1);
}

#include <stdio.h>

int main()
{
    int n;

    n = 11;
    
    printf("%d ", ft_is_prime(n));
}