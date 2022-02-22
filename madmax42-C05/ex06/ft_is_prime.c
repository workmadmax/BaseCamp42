int ft_is_prime(int nb)
{
    int i;
    int div;

    i = 1;
    while (i <= nb)
        i++;
    while (i <= (nb / 2))
    {
        if(!(nb % i))
            return (0);
        else
            i += 1;
    }
    return (1);
}
