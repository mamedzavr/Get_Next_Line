/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:43:44 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/12/10 19:05:38 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	int		length;
	int		lens2;

	length = len;
	lens2 = ft_strlen(str2);
	while (*str1 && len--)
	{
		if (length-- < lens2)
			return (NULL);
		if (ft_memcmp(str1, str2, lens2) == 0)
			return ((char *)str1);
		str1++;
	}
	return (NULL);
}
