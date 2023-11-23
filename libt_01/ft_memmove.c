/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelemartin <adelemartin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:19:38 by ademarti          #+#    #+#             */
/*   Updated: 2023/11/23 17:07:20 by adelemartin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;
	size_t	i;

	p_dest = (char *)dest;
	p_src = (char *)src;
	i = 0;
	 if (!dest && !src)
		return (NULL);
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
	while (n > 0)
	{
		n--;
		p_dest[n] = p_src[n];
	}
	return (dest);
}
