/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:53:36 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:44:25 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
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
*/

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
/*
int	main()
{
	char dest[13] = "Hello ";
	char src[] = {"World"};

	printf("%d\t%s", ft_strlcpy(dest, src, 6), dest);
	return (0);
}
*/