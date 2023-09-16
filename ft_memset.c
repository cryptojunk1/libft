/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:59:43 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/16 16:32:31 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (i < len)
	{
		*(unsigned char *)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int	main()
{
	char str[21] = "Hello my lovely world";
    

	printf("\nString vor Memset: %s\n", str);
	ft_memset(str, '1', sizeof(str));
	printf("\nString nach Memset: %s\n", str);

}
*/