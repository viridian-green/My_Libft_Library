/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:57:27 by adelemartin       #+#    #+#             */
/*   Updated: 2023/11/24 17:43:12 by ademarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <ctype.h>


// int main()
// {
// // ft_strlcat()
// 	char dst[10] = "you!";
// 	char *src = "hello!";
// 	size_t size = 3;
// 	size_t result = strlcat(dst, src, size);
// 	// free(substr);
// 	printf("%zu", result);
// 	return 0;

// //ft_memmove
//  // Example 1: Non-overlapping memory regions
//     char str1[] = "Hello, World!";
//     char buffer1[20];

//     // ft_memmove(buffer1, str1, strlen(str1) + 1);
// 	memmove(buffer1, str1, strlen(str1) + 1);
//     printf("Example 1: %s\n", buffer1);

//     // Example 2: Overlapping memory regions
//     char str2[] = "Hello, World!";
//     char buffer2[20];

//     // ft_memmove(buffer2, str2 + 7, 7);
// 	memmove(buffer2, str2 + 7, 7);
//     printf("Example 2: %s\n", buffer2);

//     return 0;

// // ft_strchr
// char *c = "234";
// 	// char dest[] = "hey";
// 	// size_t size = 1;
// 	char *result = strchr(c, 'H');
//     printf("%s", result);
// 	return 0;


// // ft_strrchr
// 	char *c = "234HrHh23--";
// 	char *original = strrchr(c, 'z');
// 	char *copy = ft_strrchr(c, 'Z');
//     printf("%s \n", original);
// 	printf("%s", copy);
// 	return 0;

// // ft_memchr
// 	char *s1 = "ha2elldwq.;eqza";
// 	char c = 'z';
// 	size_t size = 20;
// 	char *original = memchr(s1, c, size);
// 	char *copy = ft_memchr(s1, c, size);
// 	printf("%s \n", original);
// 	printf("%s", copy);

// 	// ft_memcmp
// 		char *s1 = "hot dog";
// 	char *s2 = "hat dog";
// 	size_t size = 1;
// 	int original = memcmp(s1, s2, size);
// 	int copy = ft_memcmp(s1, s2, size);
// 	printf("%d \n", original);
// 	printf("%d", copy);

// 	//ft_strnstr
// 		char *s1 = "dog hohot";
// 	char *s2 = "hot";
// 	size_t size = 4;
// 	char *original = strnstr(s1, s2, size);
// 	char *copy = ft_strnstr(s1, s2, size);
// 	printf("%s \n", original);
// 	printf("%s", copy);
// 	return 0;

// 	//ft_atoi
// 		char *s1 = "2147483647";
// 	int original = atoi(s1);
// 	int copy = ft_atoi(s1);
// 	printf("%d \n", original);
// 	printf("%d", copy);
// 	return 0;

// //ft_calloc
// 	size_t num_elements = 1;
// 	size_t element_size = sizeof(size_t);
// 	size_t *original = (size_t *)calloc(num_elements, element_size);
// 	size_t *copy = (size_t *)ft_calloc(num_elements, element_size);
// 	size_t i = 0;
// 	while (i < num_elements)
// 	{
// 		printf("%zu", original[i]);
// 		i++;
// 	}
// 		printf("\n");
// 	i = 0;
// 	while (i < num_elements)
// 	{
// 		printf("%zu", copy[i]);
// 		i++;
// 	}
// 	free(original);
// 	free(copy);
// 	return 0;

// // ft_substr

// 	char *s = "hello you!";
// 	char *result = ft_substr(s, 2, 3);
// 	// free(substr);
// 	printf("%s", result);
// 	return 0;


// // ft_strjoin
// char *s1 = "hello";
// 	char *s2 = " you!";
// 	char *result = ft_strjoin(s1, s2);
// 	// free(substr);
// 	printf("%s", result);
// 	return 0;

// // ft_strtrim
// 	char *s1 = "ahelloccb";
// 	char *s2 = "abcd";
// 	char *result = ft_strtrim(s1, s2);
// 	printf("%s", result);
// 	return 0;

// //f_putstr_fd.c

// 	ft_putstr_fd("hey", 1);
// }

//ft_putchar_fd
// ft_putchar_fd('a', 1);

//strncmp
// 	int copy = ft_strncmp"test\200", "test\0", 6);
// 	int original = strncmp("abcdefgh", "abcdwxyz", 4);
// 	printf("%d \n", copy);
// 	printf("%d", original);
// }
