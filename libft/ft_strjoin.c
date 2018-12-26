/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 13:21:28 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/12/12 18:20:24 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		length;
	char		*str;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc(sizeof(char) * (length + 1))))
		return (NULL);
	while (*s1 || *s2)
		if (*s1)
			*str++ = *s1++;
		else if (*s2)
			*str++ = *s2++;
	*str = '\0';
	str = str - length;
	return (str);
}
