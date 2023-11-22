/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:49:54 by ademarti          #+#    #+#             */
/*   Updated: 2023/11/22 16:27:42 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*last_occurrence;

	last_occurrence = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			last_occurrence = (unsigned char *)s + i;
		}
		i++;
	}
	if (last_occurrence == NULL)
	{
		return (NULL);
	}
	return ((char *)last_occurrence);
}
