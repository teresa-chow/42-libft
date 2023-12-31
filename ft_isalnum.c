/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:37:00 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/20 08:48:51 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	a = 'A';
	char	b = '1';
	char	c = '?';

	printf("isalnum(a): %d\n", isalnum(a));
	printf("ft_isalnum(a): %d\n", ft_isalnum(a));
	printf("isalnum(b): %d\n", isalnum(b));
	printf("ft_isalnum(b): %d\n", ft_isalnum(b));
	printf("isalnum(c): %d\n", isalnum(c));
	printf("ft_isalnum(c): %d\n", ft_isalnum(c));
}*/
