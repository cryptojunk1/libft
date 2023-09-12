/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:33:14 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:44:47 by rmessner         ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_p;
	unsigned int	i;

	i = 0;
	while (*s != '\0')
	{
		if (i == start)
		{
			i = 0;
			sub_p = malloc(len * sizeof(char));
			while (len > i)
			{
				ft_strlcpy(sub_p, (char *)s, len);
				i++;
				sub_p++;
				return (sub_p);
			}
			s++;
		}
		s++;
		i++;
	}
	free(sub_p);
	return (NULL);
}

/*
int	main()
{
	char src[] = "ajskdjaHelloasdj";

	printf("This is my whole string: %s\n", src);
	printf("This is my sub string: %s", ft_substr(src, 6, 6));
}
*/