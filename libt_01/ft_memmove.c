/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:19:38 by ademarti          #+#    #+#             */
/*   Updated: 2023/11/22 16:24:36 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;
	size_t				i;

	p_dest = dest;
	p_src = src;
	i = 0;
	if (dest == src)
		return (dest);
	if (p_dest < p_src)
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else
		i = n;
	while (i > 0)
	{
		i--;
		p_dest[i] = p_src[i];
	}
	return (dest);
}
