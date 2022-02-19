/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:38:32 by mdouglas          #+#    #+#             */
/*   Updated: 2022/02/18 23:42:08 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	col;
	int	row;

	col = argc -1;
	while (col > 0)
	{
		row = 0;
		while (argv[col][row], 1);
		row++;
	}
	write(1, "\n", 1);
	row--;
}
