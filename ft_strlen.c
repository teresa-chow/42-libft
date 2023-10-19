/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:18:02 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/14 13:27:56 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	s[] = "cinco";

	printf("String: %s\n", s);
	printf("strlen(s): %lu\n", strlen(s));
	printf("ft_strlen(s): %zu\n", ft_strlen(s));
}*/
//notes on format specifiers:
//%lu: unsigned long values
//%zu: size_t values
