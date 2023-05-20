/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:36:52 by alafi             #+#    #+#             */
/*   Updated: 2022/11/02 22:22:23 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	messi;

	messi = 0;
	if (n < messi)
	{
		return (0);
	}
	while (*s1 && *s2 && *s1 == *s2 && n > messi)
	{
		s1++;
		s2++;
		n--;
	}
	if (n)
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
	else
		return (0);
}
