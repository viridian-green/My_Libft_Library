/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelemartin <adelemartin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:49:54 by ademarti          #+#    #+#             */
/*   Updated: 2023/11/27 15:30:05 by adelemartin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


char	*ft_strrchr(const char *s, int c)
{
	unsigned int		i;
	char	*last_occurrence;
	char cc;

	i = 0;
	cc = (char)c;
	last_occurrence = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
		{
			last_occurrence = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == cc)
		last_occurrence = (char *)&s[i];
	return (last_occurrence);
}
