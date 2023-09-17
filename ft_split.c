/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:41:49 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 12:14:39 by rmessner         ###   ########.fr       */
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

#include "libft.h"

static int count_words(char const *s, char c)
{
    int count;
	
	count = 0;
    while (*s)
    {
        while (*s == c)
        {    
			s++;
		}
		if (*s)
        {
		    count++;
		}
		while (*s && *s != c)
        {
		    s++;
		}
	}
    return count;
}

static char *get_next_word(char const **s, char c)
{
    const char	*start;

	while (**s == c)
        (*s)++;
	start = *s;
    while (**s && **s != c)
        (*s)++;
    return ft_substr(start, 0, *s - start);
}

char **ft_split(char const *s, char c)
{
    char	**res;
	int		word_count;
	
	if (!s)
        return NULL;

    word_count = count_words(s, c);
    res = (char **)malloc(sizeof(char *) * (word_count + 1));

    if (!res)
        return NULL;

    for (int i = 0; i < word_count; i++)
    {
        res[i] = get_next_word(&s, c);
        if (!res[i])
        {
            while (i >= 0)
                free(res[i--]);
            free(res);
            return NULL;
        }
    }

    res[word_count] = NULL;
    return res;
}
