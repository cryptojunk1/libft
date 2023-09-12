/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:09:35 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 14:22:06 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*p_src;
	char		*p_dest;

	p_dest = (char *)dest;
	p_src = (const char *)src;
	while (n > 0)
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
		n--;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  s_len;
    size_t  start;
    size_t  end;
    size_t  end_len;

    s_len = ft_strlen((char *)s1);
    start = 0;
    end = s_len - 1;
    //vorwärts suchen
    while (start < s_len && ft_strchr(set, s1[start]))
    {
        start++;
    }
    while (end > start && ft_strchr(set, s1[end]))
    {
        end--;
    }
    end_len = end - start + 1;
    char    *trimmed_str = (char *)malloc(end_len +1);

    if (trimmed_str)
    {
        ft_memcpy(trimmed_str, s1 + start, end_len);
        trimmed_str[end_len] = '\0';
    }
    return (trimmed_str);
}

int main()
{
    char const *original = "   Hallo, Welt!   ";
    char const *set = " ,";

    char *trimmed = ft_strtrim(original, set);

    if (trimmed)
    {
        printf("Original: \"%s\"\n", original);
        printf("Bereinigt: \"%s\"\n", trimmed);

        free(trimmed);
    }
    else
    {
        printf("Fehler bei der Speicherzuweisung.\n");
    }

    return 0;
}
