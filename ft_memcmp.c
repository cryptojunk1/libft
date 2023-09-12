/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:59:16 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:43:22 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p_s1;
	char	*p_s2;

	p_s1 = (char *)s1;
	p_s2 = (char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while (n > 0)
	{
		if (*p_s1 == *p_s2)
			return (0);
		else if (*p_s1 < *p_s2)
			return (-1);
		else
			return (1);
		n++;
	}
	return (s1 - s2);
}
/*
int main()
{
    int    s1[] = {1,1,3,4,5,6,8,9};
    int    s2[] = {1,2,3,4,5,6,7,8,9};

    
    printf("%d", ft_memcmp(s1, s2, 18));
}
*/