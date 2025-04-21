/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:22:13 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/16 10:30:25 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*x;
	t_list	*y;
	void	*s;

	if (!lst || !del || !f)
		return (NULL);
	x = NULL;
	while (lst)
	{
		s = f(lst->content);
		y = ft_lstnew(s);
		if (!y)
		{
			ft_lstclear(&x, del);
			free(s);
			return (NULL);
		}
		ft_lstadd_back(&x, y);
		lst = lst->next;
	}
	return (x);
}
/*
content: "Artur"
next -> node2
content: "Seda"
next -> node3
content: NULL
next -> NULL
*/
