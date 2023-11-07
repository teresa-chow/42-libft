/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:59:08 by tchow-so          #+#    #+#             */
/*   Updated: 2023/11/06 13:02:32 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			i;
	unsigned int	nb;

	str = malloc((ft_intlen(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = ft_intlen(n);
	str[i] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	while (i-- && str[i] != '-')
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/*int	main(void)
{
	int	nb1 = 0;
	int	nb2 = -2147483648;
	int	nb3 = 2147483647;

	printf("nb1: %d; length: %zu\n", nb1, ft_intlen(nb1));
	printf("nb2: %d; length: %zu\n", nb2, ft_intlen(nb2));
	printf("nb3: %d; length: %zu\n", nb3, ft_intlen(nb3));

	printf("string: %s\n",ft_itoa(nb1));
	printf("string: %s\n",ft_itoa(nb2));
	printf("string: %s\n",ft_itoa(nb3));
}*/
