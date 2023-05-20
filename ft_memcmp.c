/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:36:57 by alafi             #+#    #+#             */
/*   Updated: 2022/11/02 22:31:10 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*basketbol;
	unsigned char	*futbol;
	size_t			ronaldo;

	basketbol = (unsigned char *)s1;
	futbol = (unsigned char *)s2;
	if (!n)
	{
		return (0);
	}
	ronaldo = 0;
	while (ronaldo < n)
	{
		if (basketbol[ronaldo] != futbol[ronaldo])
		{
			return (basketbol[ronaldo] - futbol[ronaldo]);
		}
		ronaldo++;
	}
	return (0);
}
/*
int main(void)
{
	char str[50] = "a";
	char str2[50] = "z";
	int kobe;
	kobe = ft_memcmp(str, str2, 1);

	printf("%i", kobe);
}
*/
