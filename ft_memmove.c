/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:42:40 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/17 14:38:22 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;

	ptr_dest = dest;
	if (ptr_dest < (unsigned char *) src)
		return (ft_memcpy(dest, src, n));
	else if (ptr_dest > (unsigned char *) src)
	{
		while (n--)
			ptr_dest[n] = ((unsigned char *) src)[n];
	}
	return (dest);
}
