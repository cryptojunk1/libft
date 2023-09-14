/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:41:49 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/14 16:15:32 by rmessner         ###   ########.fr       */
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

static int	ft_countword(char *s, char delimiter)
	{
		int count;
		int	word;
		
		count = 0;
		word = 0;
		while (*s != '\0')
		{
			if (*s == delimiter && word == 1)
			{
				word = 0;
			}
			else if (word == 0)
			{
				count++;
				word = 1;
			}
			s++;
		}
		return (count);
	}

static	int ft_count_letter(char *s, char delimiter)
{
	unsigned int	i;

	i = 0;
	while(s[i] != '\0' && s[i] != delimiter)
	{
		i++;
	}
	return (i);
}

static char	*ft_strndup(const char *s, unsigned int n)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (n + 1));
	if (ptr == NULL)
		return NULL;
	while(i < n)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char **ft_split(char const *s, char c)
{
	int	word_count;
	char	**res;
	int		len;
	int		i;

	i = 0;
	word_count = ft_countword((char *)s, c);
	if (s == NULL)
	{
		return (NULL);
	}
	res = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (res == NULL)
    {
        return (NULL);
    }
	while (word_count > i)
	{
		len = ft_count_letter((char *)s, c);
		res[i] = ft_strndup((char *)s, len);
		i++;
		s += len + 1;
	}
	res[word_count] = NULL;
	return (res);
}

int main(void)
{
    char const *input = "Hello World,This,Is,An,Example";
    char delimiter = ',';

    char **result = ft_split(input, delimiter);

    if (result)
    {
        int i = 0;
        while (result[i])
        {
            printf("%s\n", result[i]);
            free(result[i]); // Free each string
            i++;
        }
        free(result); // Free the array
    }
    else
    {
        printf("Splitting failed.\n");
    }

    return 0;
}
