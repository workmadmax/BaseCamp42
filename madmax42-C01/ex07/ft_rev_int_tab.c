/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:58:32 by mdouglas          #+#    #+#             */
/*   Updated: 2022/02/10 22:38:34 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int aux;
	int i;

	i = 0;
	size = size - 1;
	while(i < size)
	{
		aux = tab[i];
		tab[i] = tab[size];
		tab[size] = aux;
		i++;
		size--;
	}
}