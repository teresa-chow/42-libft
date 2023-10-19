/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:44:22 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/19 09:59:13 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	a = '1';
	char	b = 0x80;

	printf("isascii(a): %d\n", isascii(a));
	printf("ft_isascii(a): %d\n", ft_isascii(a));
	printf("isascii(b): %d\n", isascii(b));
	printf("ft_isascii(b): %d\n", ft_isascii(b));
}*/
