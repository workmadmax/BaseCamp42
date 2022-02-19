/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:48:49 by mdouglas          #+#    #+#             */
/*   Updated: 2022/02/18 23:40:54 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	row;

	row = 0;
	argc = argc + 1;
	while (argv[0][row] != '\0')
	{
		write(1, &argv[0][row], 1);
		i++;
	}
	write (1, "\n", 1);
}
