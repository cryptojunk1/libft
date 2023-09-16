/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:33:14 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/16 17:18:05 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*
Return value: The substring, NULL if allocation fails
*/

/*
int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	if (size != '\0')
	{
		while (src[x] != '\0' && x < size)
		{
			dest[i] = src[x];
			i++;
			x++;
		}
		dest[i] = '\0';
	}
	return (i);
}
*/

static char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
		i++;
	return (dest);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (!s)
        return (NULL);

    size_t s_len = ft_strlen(s);

    if (start >= s_len)
        return (NULL);

    size_t sub_len = 0;
    while (s[start + sub_len] && sub_len < len)
    {
        sub_len++;
    }

    char *substr = (char *)malloc((sub_len + 1) * sizeof(char));

    if (!substr)
        return (NULL);

    ft_strncpy(substr, (char *)(s + start), sub_len);
    substr[sub_len] = '\0';

    return (substr);
}



/*
int	main()
{
	char src[] = "ajskdjaHelloasdj";

	printf("This is my whole string: %s\n", src);
	printf("This is my sub string: %s", ft_substr(src, 6, 6));
}
*/