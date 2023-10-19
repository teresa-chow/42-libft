/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:18:15 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/18 12:49:34 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	ptr = (char *)s;
	while ((i >= 0) && (ptr[i] != (unsigned char)c))
		i--;
	if (ptr[i] == (unsigned char)c)
		return (&ptr[i]);
	return (NULL);
}
