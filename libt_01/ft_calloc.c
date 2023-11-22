/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:32:45 by ademarti          #+#    #+#             */
/*   Updated: 2023/11/22 16:29:50 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	*tab;

	tab = NULL;
	i = 0;
	tab = (size_t *)malloc(nmemb * size);
	if (tab == NULL)
	{
		return (NULL);
	}
	while (i < nmemb)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
