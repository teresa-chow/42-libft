/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:02:58 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/19 09:52:47 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	a = 'a';
	char	b = '1';

	printf("isalpha(a): %d\n", isalpha(a));
	printf("ft_isalpha(a): %d\n", ft_isalpha(a));
	printf("isalpha(b): %d\n", isalpha(b));
	printf("ft_isalpha(b): %d\n", ft_isalpha(b));
}*/
