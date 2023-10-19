/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:59:10 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/15 16:09:55 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = '\0';
}
/*
int	main(void)
{
        char    str1[16] = "testetesteteste";
        char    str2[16] = "testetesteteste";

        //bzero
        printf("%s\n", str1);
        bzero(str1 + 5, 10);
        printf("%s\n\n", str1);

        //ft_bzero
        printf("%s\n", str2);
        ft_bzero(str2 + 5, 10);
        printf("%s\n", str2);
}*/
