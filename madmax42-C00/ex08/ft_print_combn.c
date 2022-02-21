#include <unistd.h>

void    ft_print_combn(int n)
{
    char    num[9];
    char    max[9];
    int     i;

    i = -1;
    while (++i < n)
    {
        max[i] = '9' - (n -1) + i;
        num[i] = '0' + i;
    }
    write(1, num, --i + 1);
    while (i >= 0)
    {
        if (num[i] == max[i])
            i--;
        else if (i++ != n)
            num[i] = num[i -1];
        else
            i--;
        if (++num[i] == max[i] || i == n -1)
        {
            write(1, ", ", 2);
            write(1, num, n);
        }
    }
}

int main()
{
    ft_print_combn(2);
}