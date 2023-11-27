/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelemartin <adelemartin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:13:24 by ademarti          #+#    #+#             */
/*   Updated: 2023/11/27 15:50:29 by adelemartin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

size_t	count_words(char const *s, char c)
{
	size_t	word_count;
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
			if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
			{
			word_count++;
			}
		i++;
	}
	return (word_count);

	while (str[i] != '\0')
    {
        if (str[i] != c && x == 0)
        {
            x = 1;
            word_count++;
        }
        else if (str[i] == c)
            x = 0;
        i++;
    }
	return (word_count);
}

static void	ft_free(char **result, int word_count)
{
	size_t i;

	i = 0;
	while (i < word_count)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
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
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
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

char	**make_substrings(char const *s, char c, char **result)
{
	size_t i = 0;
	size_t start = 0;
	size_t end = 0;
	size_t j = 0;

	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
			{
				i++;
			}
			end = i;
			result[j] = ft_substr(s, start, end - start);
			j++;
		}
		else
		{
			i++;
		}
	}
	result[j] = NULL;
	return (result);
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
	make_substrings(s, c, result);
	return (result);
}

int main()
{
	char *s = "*yoyo*how*are*you*";
	// Try also "yo how**are**you"
	char c = '*';
	char **result2 = ft_split(s, c);
	size_t ok = count_words(s, c);
	printf("%zu\n", ok);
for (int i = 0; result2[i] != NULL; ++i)
{
    printf("%s\n", result2[i]);
}
	return 0;
}
