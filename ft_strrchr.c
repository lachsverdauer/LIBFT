/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:19:15 by alafi             #+#    #+#             */
/*   Updated: 2022/11/02 19:01:01 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (c > 127)
	{
		c = c - 128;
	}
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{	
		if (str[i] == c)
			return ((char *) &str[i]);
		i--;
	}
	return (NULL);
}
