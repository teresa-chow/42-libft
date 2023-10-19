/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:20:15 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/19 09:53:21 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	a = '1';
	char	b = 'a';

	printf("isdigit(a): %d\n", isdigit(a));
	printf("ft_isdigit(a): %d\n", ft_isdigit(a));
	printf("isdigit(b): %d\n", isdigit(b));
	printf("ft_isdigit(b): %d\n", ft_isdigit(b));
}*/
