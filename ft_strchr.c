/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <tchow-so@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:19:34 by tchow-so          #+#    #+#             */
/*   Updated: 2023/10/18 11:15:02 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (ptr[i] && (ptr[i] != (unsigned char)c))
		i++;
	if (ptr[i] == (unsigned char)c)
		return (&ptr[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "lazy fox jumps over quick brown dog";
	char	c = 'o' + 256;

	printf("ft_strchr: %s\n", ft_strchr(s, c));
	printf("strchr: %s\n", strchr(s, c));
}*/
/*without typecasting c, failing following tests
(does not compile with -Werror flag):
check(ft_strchr(s, 't' + 256) == s); showLeaks();
res = single_test_strrchr(5, "teste", 1024 + 'e') && res;
res = single_test_strrchr(6, "teste", 1024) && res;
*/
