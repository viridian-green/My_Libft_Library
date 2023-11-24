/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:45:04 by ademarti          #+#    #+#             */
/*   Updated: 2023/11/24 17:32:32 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] != '\0' && s2[i]!= '\0' && i < n - 1 && s1[i] == s2[i])
	{
		i++;
	}
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
