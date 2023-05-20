/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:05:55 by alafi             #+#    #+#             */
/*   Updated: 2022/11/03 14:08:33 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lester(char *s, char c)
{
	int	h;

	h = 0;
	while (s[h])
	{
		if (s[h] == c || s[h] == '\0')
		{
			return (h);
		}
		h++;
	}
	return (h);
}

static int	michael(char *s, char c)
{
	int	m;
	int	j;
	int	x;

	m = 0;
	j = 0;
	while (s[m])
	{
		x = 0;
		while (s[m] == c && s[m])
		{
			m++;
		}
		while (s[m] != c && s[m])
		{
			m++;
			x = 1;
		}
		if (x == 1)
		{
			j++;
		}
	}
	return (j);
}

static char	**mally(char const *s, char c)
{
	char	**pop;
	int		du;
	int		j;

	pop = malloc((michael((char *)s, c) + 1) * sizeof(char *));
	if (pop == NULL)
		return (NULL);
	du = -1;
	j = 0;
	while (s[++du])
	{
		if (s[du] != c)
		{
			pop[j] = malloc((lester((char *)s + du, c) + 1) * sizeof(char));
			if (pop[j++] == NULL)
				return (NULL);
			while (s[du] != c && s[du] != '\0')
				du++;
		}
		if (s[du] == '\0')
			break ;
	}
	pop[j] = 0;
	return (pop);
}

static char	**bruder(char const *s, char c, size_t l, size_t j)
{
	char	**wok;
	size_t	i;

	wok = mally(s, c);
	if (!wok)
		return (NULL);
	while (s[++l])
	{
		if (s[l] != c)
		{
			i = 0;
			while (s[l] != c && s[l] != '\0')
			{
				wok[j][i++] = s[l++];
				if (s[l] == c || s[l] == '\0')
					wok[j][i] = '\0';
			}
			j++;
		}
		if (s[l] == '\0')
			break ;
	}
	return (wok);
}

char	**ft_split(char const *s, char c)
{
	char	**lul;
	size_t	is;
	size_t	j;

	is = -1;
	j = 0;
	if (!s)
		return (NULL);
	lul = bruder(s, c, is, j);
	if (!lul)
		return (NULL);
	return (lul);
}
