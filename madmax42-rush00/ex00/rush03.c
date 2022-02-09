/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 01:58:25 by mdouglas          #+#    #+#             */
/*   Updated: 2022/02/07 00:24:18 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	r;

	c = 1;
	r = 1;
	while (r <= y)
	{
		while (c <= x)
		{
			if ((r == 1 && c == 1) || (r == y && c == 1))
				ft_putchar('A');
			else if ((r == 1 && c == x) || (r == y && c == x))
				ft_putchar('C');
			else if ((c >= 1 && (r == 1 || r == y)) || (c == 1 || c == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (c == x)
				ft_putchar('\n');
			c++;
		}
		c = 1;
		r++;
	}
}
