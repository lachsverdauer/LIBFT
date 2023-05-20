/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:37:04 by alafi             #+#    #+#             */
/*   Updated: 2022/11/03 14:14:13 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (*find == '\0')
		return ((char *)str);
	i = 0;
	if (*str == '\0' || n <= 0)
		return (NULL);
	while (i < n)
	{
		j = 0;
		while (find[j] == str[i + j])
		{
			if (find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
			if (i + j >= n)
				return (0);
		}
		i++;
	}
	return (0);
}
