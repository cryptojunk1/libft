/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:53:36 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 18:59:45 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	//count remaining src char
	while (src[i] != '\0')
		i++;
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