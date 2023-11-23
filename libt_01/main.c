/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelemartin <adelemartin@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:57:27 by adelemartin       #+#    #+#             */
/*   Updated: 2023/11/23 18:33:19 by adelemartin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}


int main(void)
{
const char *str = "Hello, World!";
    char search_char = 0;

    char *result = ft_strchr(str, search_char);

        printf("'%c' found at position: %ld\n", search_char, result - str);

	// char s[] = "tripouille";
	// /* 1 */ check(ft_strchr(s, 't') == s); showLeaks();
	// /* 2 */ check(ft_strchr(s, 'l') == s + 7); showLeaks();
	// /* 3 */ check(ft_strchr(s, 'z') == 0); showLeaks();
	// /* 4 */ check(ft_strchr(s, 0) == s + strlen(s)); showLeaks();
	// /* 5 */ check(ft_strchr(s, 't' + 256) == s); showLeaks();
	// write(1, "\n", 1);
	return (0);
}
