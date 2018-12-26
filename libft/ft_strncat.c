/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:10:12 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/11/30 20:41:14 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *str, size_t len)
{
	char		*buff;
	size_t		lendest;

	buff = dest;
	lendest = ft_strlen(dest);
	buff = &buff[lendest];
	while (*str && len--)
		*buff++ = *str++;
	*buff = '\0';
	return (dest);
}
