/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:28:23 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:44:11 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	if (size != '\0')
	{
		while (src[x] != '\0' && x < size -1)
		{
			dest[i] = src[x];
			i++;
			x++;
		}
		dest[i] = '\0';
	}			
	return (i);
}

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/
char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (ptr != NULL)
	{
		ft_strlcpy(ptr, (char *)s, ft_strlen((char *)s) + 1);
	}
	return (ptr);
}
/*
int	main()
{
    const char *src = "Hello, World!";
    char *dest = ft_strdup(src);

    if (dest != NULL) {
        printf("Original: %s\n", src);
        printf("Copied Version: %s\n", dest);

        free(dest);
    } 
	else 
	{
        printf("Something went wrong my friend... Lets try again!\n");
    }
    return 0;
}
*/