#include <unistd.h>

void    ft_write_numb(int a, int b)
{
    char    i;
    char    n;
    char    x;
    char    z;

    i = a / 10 + '0';
    n = a % 10 + '0';
    x = b / 10 + '0';
    z = b % 10 + '0';

    write(1, &i, 1);
    write(1, &n, 1);
    write(1, " ", 1);
    write(1, &x, 1);
    write(1, &z, 1);

    if (i == '9' && n == '8' && x == '9' && z == '9')
        return ;
    write(1, ", ", 2);
}

void    ft_print_comb2(void)
{
    int i;
    int n;

    i = 0;
    n = 0;
    while (i < 100)
    {
        n = i + 1;
        while (n < 100)
        {
            ft_write_numb(i, n);
            n++;
        }
        i++;
    }
}

int main()
{
    ft_print_comb2();
}