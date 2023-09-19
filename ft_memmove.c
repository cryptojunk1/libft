/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:48:17 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/19 12:57:13 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*p_dest;
	const char	*p_src;

	p_dest = (char *)dest;
	p_src = (const char *)src;
	if (p_dest < p_src)
	{
		while (n-- > 0)
		{
			*p_dest++ = *p_src++;
		}
	}
	else if (p_dest > p_src)
	{
		p_dest += n;
		p_src += n;
		while (n-- > 0)
		{
			*--p_dest = *--p_src;
		}
	}
	return (dest);
}

/*
int	main()
{
	char	dest[20];
	char	src[] = "This is my test string!";

	printf("Dest before cpy: %s\n", dest);
	ft_memmove(dest, src + 1, 9);
	printf("Dest after cpy: %s\n", dest);
	return (0);
}
*/