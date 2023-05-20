/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:45:02 by alafi             #+#    #+#             */
/*   Updated: 2022/11/02 22:33:50 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ok;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	ok = (char *)malloc(sizeof(char) * (len + 1));
	if (ok == NULL)
		return (NULL);
	while (i < len)
	{
		ok[i] = f(i, s[i]);
		i++;
	}
	ok[i] = '\0';
	return (ok);
}
