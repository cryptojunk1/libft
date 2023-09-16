/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:41:49 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/16 19:04:59 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
Description 
Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end with a NULL pointer.

Return value The array of new strings resulting from the split.
NULL if the allocation fails.

*/

static int count_words(const char *s, char delimiter)
{
	int	count = 0;
	int	word = 0;

	while (*s != '\0')
	{
		if (*s == delimiter && word == 1)
		{
			word = 0;
		}
		else if (*s != delimiter && word == 0)
		{
			count++;
			word = 1;
		}
        s++;
    }
    return (count);
}

static char *ft_strndup(const char *s, size_t n)
{
    size_t	i;

	i = 0;
	char *ptr = (char *)malloc(n + 1);
    if (ptr == NULL)
        return NULL;
    while (i < n)
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

static char **free_memory(char **res, int index)
{
	while (index >= 0)
	{
		free(res[index]);
		index--;
	}
	free(res);
	return (NULL);
}

void	skip_spaces(char const *s, char c)
{
	while (*s == c)
		s++;
}

char	**ft_split(char const *s, char c)
{
	size_t	s_len;
	size_t	len;
	int		word_count;
	char	**res;
	int		i;
	const char	*end;

	i = 0;
	s_len = ft_strlen(s);
	word_count = count_words(s, c);
	if (!s || !*s)
		return (NULL);
	skip_spaces(s, c);
    while (s_len > 0 && s[s_len - 1] == c)
        s_len--;
    res = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (res == NULL)
        return (NULL);
    while (word_count > 0)
    {
		while (*s == c)
			s++;
        end = s;
        while (*end != c && *end != '\0')
            end++;
        len = end - s;
        res[i] = ft_strndup(s, len);
        if (res[i] == NULL)
        {
            return (free_memory(res, i - 1));
        }
        word_count--;
        s = end;
        i++;
    }
    res[i] = NULL;
    return (res);
}
