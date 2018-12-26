/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:50:27 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/12/10 17:27:47 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*buff1;
	t_list		*buff2;

	if (!lst || !f)
		return (NULL);
	buff1 = f(lst);
	buff2 = buff1;
	while (lst->next)
	{
		lst = lst->next;
		if (!(buff2->next = f(lst)))
			return (NULL);
		buff2 = buff2->next;
	}
	return (buff1);
}
