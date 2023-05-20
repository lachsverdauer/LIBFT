/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:22:17 by alafi             #+#    #+#             */
/*   Updated: 2022/11/02 22:29:19 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "ft_memset.c"
#include <stdio.h>
#include <strings.h>
#include <unistd.h>
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*string;

	string = (char *)s;
	i = 0;
	while (i < n)
	{
		string[i] = 0;
		i++;
	}
}

/*
int	main(void)
{
	char	dst[7];

	strcpy(dst, "nimmerland");
	puts(dst);
	write(1, &dst, 7);
	puts(dst);
}
*/
