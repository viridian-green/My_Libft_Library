/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:27:46 by ademarti          #+#    #+#             */
/*   Updated: 2023/11/22 16:29:00 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;
	size_t				i;

	p_dest = dest;
	p_src = src;
	i = 0;
	if (dest == src)
	{
		return (dest);
	}
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
