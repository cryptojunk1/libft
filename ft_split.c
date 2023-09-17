/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:41:49 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 18:45:44 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
//count words after finding c in s
static int count_words(char const *s, char c)
{
    int count;
	
	count = 0;
    while (*s)
    {
        while (*s == c)
			s++;
		if (*s)
        {
		    count++;
		}
        //itterate through word
		while (*s && *s != c)
		    s++;
	}
    return count;
}

static char *get_next_word(char const **s, char c)
{
    const char	*start;
	//extract the word and write it back
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
    int		i;
	
	if (!s)
        return NULL;
	i = 0;
    word_count = count_words(s, c);
    res = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!res)
        return NULL;
	//loop through and write with get_next_line the array
    while ( i < word_count)
    {
        res[i] = get_next_word(&s, c);
        if (!res[i])
        {
			//free if fail
            while (i >= 0)
                free(res[i--]);
            free(res);
            return NULL;
        }
		i++;
    }
    res[word_count] = NULL;
    return res;
}
