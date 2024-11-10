/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaki <azaki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:42:42 by azaki             #+#    #+#             */
/*   Updated: 2024/11/09 17:42:02 by azaki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	i;
	size_t	a;

	i = 0;
	if (!s || !f)
		return (NULL);
	a = ft_strlen(s);
	new_s = malloc(sizeof(char) * (a + 1));
	if (!new_s)
	{
		return (NULL);
	}
	while (i < a)
	{
		*(new_s + i) = (*f)(i, *(s + i));
		i++;
	}
	*(new_s + i) = '\0';
	return (new_s);
}
