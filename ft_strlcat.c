/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:31:39 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/19 12:00:08 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	j = d_len;
	if (d_len < size - 1 && size > 0)
	{
		while (src[i] != '\0' && d_len + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	if (d_len >= size)
		d_len = size;
	return (d_len + s_len);
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