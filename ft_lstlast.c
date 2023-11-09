/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchow-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:42:28 by tchow-so          #+#    #+#             */
/*   Updated: 2023/11/09 11:04:37 by tchow-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		size;
	t_list	*last;

	size = ft_lstsize(lst) - 1;
	if (!lst)
		return (NULL);
	while (size--)
		lst = lst->next;
	last = lst;
	return (last);
}
