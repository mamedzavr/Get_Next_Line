/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:21:35 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/12/05 18:47:54 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *str, int c, size_t len)
{
	unsigned char			*buff;
	const unsigned char		*src;
	unsigned char			sym;
	int						i;

	buff = (unsigned char *)dest;
	src = (const unsigned char *)str;
	sym = (unsigned char)c;
	i = 0;
	while (len--)
	{
		i++;
		if (*src == sym)
		{
			*buff++ = *src++;
			return (dest += i);
		}
		else
			*buff++ = *src++;
	}
	return (NULL);
}
