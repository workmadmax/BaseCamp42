/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:49:14 by mdouglas          #+#    #+#             */
/*   Updated: 2022/02/10 13:50:17 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int aux;
	int aux2;
	
	aux = *a;
	aux2 = *b;
	*a = aux / aux2;
	*b = aux % aux2;
}