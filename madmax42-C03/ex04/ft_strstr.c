/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:37:47 by mdouglas          #+#    #+#             */
/*   Updated: 2022/02/16 20:48:53 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + n] == to_find[n] && str[i + n] != '\0')
			n++;
		if (to_find[n] == '\0')
			return (str + i);
		i++;
		n = 0;
	}
	return (0);
}
