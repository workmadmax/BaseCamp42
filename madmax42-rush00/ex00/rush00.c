/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:27:34 by doantoni          #+#    #+#             */
/*   Updated: 2022/02/07 00:18:34 by mdouglas         ###   ########.fr       */
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
			if ((r == 1 || r == y) && (c == 1 || c == x))
				ft_putchar("o");
			else if (r == 1 || r == y)
				ft_putchar("-");
			else if (c == 1 || c == x)
				ft_putchar("|");
			else
				ft_putchar(" ");
			if (c == x)
				ft_putchar("\n");
			c++;
		}
		c = 1;
		r++;
	}
}
