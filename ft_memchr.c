/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:18:04 by alafi             #+#    #+#             */
/*   Updated: 2022/11/03 14:12:35 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*kik;
	size_t		i;

	while (c > 127)
		c = c - 128;
	kik = str;
	i = 0;
	while (i < n)
	{
		if (kik[i] == c)
			return ((void *)&kik[i]);
		i++;
	}
	return (NULL);
}
