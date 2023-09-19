/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:59:43 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/19 14:41:37 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
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