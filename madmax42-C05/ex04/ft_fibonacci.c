int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if(index <= 1)
        return (index);
    return (ft_fibonacci(index -2) + ft_fibonacci(index - 1));
}

#include <stdio.h>

int main(void)
{
    printf("%i ", ft_fibonacci(15));
}