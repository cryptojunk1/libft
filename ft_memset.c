/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:59:43 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 09:06:18 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_memset(void *s, int c, size_t len)
{
	char	*ptr;
	char	value;

	ptr = (char *)s;
	value = (char)c;
	while (len > 0)
	{
		*ptr = value;
		ptr++;
		len--;
	}
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