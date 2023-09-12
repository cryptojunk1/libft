/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:31:39 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:44:19 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
/*
int ft_strlen(char *src)
{
    int i;

    i = 0;
    while(src[i] != '\0')
		i++;
	return (i);
}
*/

unsigned int	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	di;
	unsigned int	total_l;

	i = 0;
	di = 0;
	total_l = ft_strlen(dest) + ft_strlen(src);
	if (size != '\0')
	{
		while (dest[di] != '\0')
		{
			di++;
		}
		while (di < size -1 && src[i] != '\0')
		{
			dest[di + i] = src[i];
			i++;
		}
		dest[i + di] = '\0';
	}
	return (total_l);
}
/*
int	main()
{
	char dest[13] = "Hello ";
	char src[] = {"World"};

	printf("%d\t%s", ft_strlcat(dest, src, 1), dest);
	return (0);
}
*/