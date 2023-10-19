/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:57:55 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/19 16:47:00 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((nptr[i] == ' ') || ((nptr[i] >= 9) && (nptr[i] <= 13)))
		i++;
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * sign);
}
