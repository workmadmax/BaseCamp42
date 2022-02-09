/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:12:23 by mdouglas          #+#    #+#             */
/*   Updated: 2022/02/07 17:55:36 by mdouglas         ###   ########.fr       */
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
			if ((r == 1 && c == 1) || (r > 1 && r == y && c > 1 && c == x))
				ft_putchar('A');
			else if ((r == y && c == 1) || (r == 1 && c == x))
				ft_putchar('C');
			else if (c == 1 || r == y || c == x || r == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		c = 1;
		r++;
	}
}
