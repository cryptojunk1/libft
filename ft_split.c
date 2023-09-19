/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:20:51 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/19 12:27:07 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
		}
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*get_next_word(char const **s, char c)
{
	const char	*start;

	while (**s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	return (ft_substr(start, 0, *s - start));
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word_count;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	word_count = count_words(s, c);
	res = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < word_count)
	{
		res[i] = get_next_word(&s, c);
		if (!res[i])
		{
			while (i >= 0)
				free(res[i--]);
			free(res);
			return (NULL);
		}
		i++;
	}
	res[word_count] = NULL;
	return (res);
}
