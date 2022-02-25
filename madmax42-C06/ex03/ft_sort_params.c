void ft_str_sort(char *str[], int size)
{
    int i;
    int n;
    char *aux;

    i = 1;
    while (i < size)
    {
        j = i + 1;
        while (n < size)
        {
            if (ft_strcmp(str[i], str[n]) > 0)
            {
                aux = str[i];
                str[i] = str[n];
                str[n] = aux;
            }
            n++;
        }
        i++;
    }
}

int ft_strcmp(char *s1, char *s2)
{
    while ((*s1 && *s2) != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void    ft_putstr(char *str)
{
    int n;
    
    n = 0;
    while (str[n] != '\0')
    {
        write(1, &str[n], 1);
        n++;
    }
}

















int main()
[

]