/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:13:24 by ademarti          #+#    #+#             */
/*   Updated: 2023/11/25 15:58:43 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

size_t	count_words(char const *s, char c)
{
	size_t	word_count;
	size_t	i;
	size_t deli_at_start;

	word_count = 1;
	i = 0;
	deli_at_start = 1;
	while (s[i] != '\0')
	{
		if (deli_at_start == 1)
		{
			if (s[i] == c)
			{
			word_count = 0;
			deli_at_start = 0;
			i++;
			}
		}
		if (s[i] == c)
		{
			word_count++;
		}
		i++;
	}
	return (word_count);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
		return (NULL);
	if (start < 0)
		return (NULL);
	i = 0;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	occurences;

	occurences = count_words(s, c);
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (occurences + 1));
	if (!result)
		return (NULL);
//You have to free the malloc within the function
	// free(result);
	return (result);
}

char	**make_substrings(char const *s, char c)
{
	size_t	i;
	size_t deli_at_start;
	size_t start;
	size_t end;
	size_t j;

	start = 0;
	end = 0;
	i = 0;
	j = 0;
	deli_at_start = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
			{
				i++;
				ft_split(s, c)[j] = ft_substr(s, start, i - start);
				j++;
			}
		}
		else
		{
			i++;
		}

		if (s[i] == c)
		{
			end = s[i];
		}
		i++;
	}
	return (ft_split(s, c));
}

int main()
{
	char *s = "*yo*how*are*you*";
	// Try also "yo how**are**you"
	char c = '*';
	// char *result = is_word(s, c);
	char **result2 = ft_split(s, c);
	 for (int i = 0; result2[i] != NULL; ++i) {
            printf("%s\n", result2[i]);
	return 0;
}
}
