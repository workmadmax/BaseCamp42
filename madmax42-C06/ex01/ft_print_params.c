/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:35:42 by mdouglas          #+#    #+#             */
/*   Updated: 2022/02/18 23:42:12 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char *argv[])
{
	int	col;
	int row;

	col = 1;
	while (col < argc)
	{
		row = 0;
		while (argv[col][row] != '\0')
		{
			write(1, &argv[col][row], 1);
			row++;
		}
		write(1, "\n", 1);
		row++;
	}
}
