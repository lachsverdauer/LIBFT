/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:04:21 by alafi             #+#    #+#             */
/*   Updated: 2022/11/02 19:12:45 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	h;
	size_t	s;

	h = 0;
	s = 0;
	while (dst[h] && h < size)
		h++;
	while (src[s] && (h + s + 1) < size)
	{
		dst[h + s] = src[s];
		s++;
	}
	if (h < size)
		dst[h + s] = '\0';
	return (h + ft_strlen(src));
}
