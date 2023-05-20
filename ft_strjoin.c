/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:22:35 by alafi             #+#    #+#             */
/*   Updated: 2022/11/02 22:28:51 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mucka;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
	{
		return (0);
	}
	mucka = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (mucka == NULL)
		return (NULL);
	ft_strlcpy(mucka, s1, len1 + 1);
	ft_strlcpy(mucka + len1, s2, len2 + 1);
	return (mucka);
}
/*
int main(void)
{
	char s1[] = "peanut";
	char s2[] = "butter";

	printf("%s\n", ft_strjoin(s1, s2));

	return (0);
}
*/
