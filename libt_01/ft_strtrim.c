/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:55:33 by ademarti          #+#    #+#             */
/*   Updated: 2023/11/25 15:49:15 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

size_t	ft_is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_trimmed;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	// if (!s1 || !set)
	// 	return (NULL);
	if (s1 == 0)
		return (ft_strdup(""));
	if (ft_strlen(s1) <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	while (ft_is_in_set(s1[start], set) == 0)
		start++;
	while (ft_is_in_set(s1[end], set) == 0)
		end--;
	s1_trimmed = (char *)malloc(sizeof(char) * ((end - start) + 1));
	if (!s1_trimmed)
		return (NULL);
	s1_trimmed = ft_substr(s1, start, end - start + 1);
	i = 0;
	while (s1_trimmed[i] != '\0')
		i++;
	s1_trimmed[i] = '\0';
	return (s1_trimmed);
}

// int main()
// {
// 	char *s1 = "ahelloccb";
// 	char *s2 = "";
// 	char *result = ft_strtrim(s1, s2);
// 	printf("%s", result);
// }
