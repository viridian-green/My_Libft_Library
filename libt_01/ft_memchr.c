/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:32:42 by ademarti          #+#    #+#             */
/*   Updated: 2023/11/22 16:28:50 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p_s;

	p_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p_s[i] == c)
		{
			return ((void *)&p_s[i]);
		}
		i++;
	}
	return (NULL);
}
