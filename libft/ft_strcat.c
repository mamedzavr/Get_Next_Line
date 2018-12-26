/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:09:20 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/11/30 19:19:57 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *str)
{
	char		*buff;
	size_t		len;

	buff = dest;
	len = ft_strlen(buff);
	buff = &buff[len];
	while (*str)
		*buff++ = *str++;
	*buff = '\0';
	return (dest);
}
