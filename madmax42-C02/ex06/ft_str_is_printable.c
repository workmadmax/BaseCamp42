/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:31:41 by mdouglas          #+#    #+#             */
/*   Updated: 2022/02/15 01:55:09 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return 0;
		}
		i++;
	}
	return (1);
}
