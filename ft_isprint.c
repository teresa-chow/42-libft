/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:09:33 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/19 09:56:41 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	a = 32;
	char	b = 127;
	
	printf("isprint(a): %d\n", isprint(a));
	printf("ft_isprint(a): %d\n", ft_isprint(a));
	printf("isprint(b): %d\n", isprint(b));
	printf("ft_isprint(b): %d\n", ft_isprint(b));
}*/
