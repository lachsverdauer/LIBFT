/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:01:47 by alafi             #+#    #+#             */
/*   Updated: 2022/11/02 19:06:54 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) != 0 || ft_isalpha(c) != 0)
	{
		return (1);
	}
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isalnum('.'));
	printf("%d", ft_isalnum('F'));
	printf("%d", ft_isalnum(6));
}
*/
