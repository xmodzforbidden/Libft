/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaki <azaki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:03:17 by azaki             #+#    #+#             */
/*   Updated: 2024/11/09 17:42:02 by azaki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*q;
	const unsigned char	*p;

	p = s1;
	q = s2;
	while (n > 0)
	{
		if (*p != *q)
		{
			return (*p - *q);
		}
		p++;
		q++;
		n--;
	}
	return (0);
}
