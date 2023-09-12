/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:21:10 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:43:40 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

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
/*
int	main()
{
	char	dest[20];
	char	src[] = "This is my test string!";

	printf("Dest before cpy: %s\n", dest);
	ft_memcpy(dest, src, 15);
	printf("Dest after cpy: %s\n", dest);
	return (0);
}
*/