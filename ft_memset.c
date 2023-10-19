/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:36:50 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/15 16:09:35 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = (unsigned char) c;
	return (s);
}
/*
int	main(void)
{
	char	str1[20] = "secret password ups";
	char	str2[20] = "secret password ups";

	//memset
	printf("%s\n", str1);
	memset(str1 + 7, '*', 8);
	printf("%s\n\n", str1);

	//ft_memset
	printf("%s\n", str2);
	ft_memset(str2 + 7, '*', 8);
	printf("%s\n", str2);
}*/
