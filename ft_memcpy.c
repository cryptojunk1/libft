/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:21:10 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/19 14:49:47 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*p_src;
	char		*p_dest;

	p_dest = (char *)dest;
	p_src = (const char *)src;
	if (p_dest == NULL && p_src == NULL)
		return (NULL);
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