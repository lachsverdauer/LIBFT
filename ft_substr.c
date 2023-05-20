/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:40:08 by alafi             #+#    #+#             */
/*   Updated: 2022/11/02 22:22:57 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*spring;
	size_t	sprlen;

	sprlen = ft_strlen(s);
	if (start > sprlen)
	{
		spring = malloc(1);
		*spring = '\0';
		return (spring);
	}
	if ((sprlen - start) < len)
	{
		len = sprlen - start;
	}
	spring = (malloc(sizeof(*s) * (len + 1)));
	if (!spring)
	{
		return (0);
	}
	ft_strlcpy(spring, s + start, len + 1);
	return (spring);
}
