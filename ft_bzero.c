/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:19:32 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:42:55 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*ptr;

	ptr = (char *)str;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}

/*
int main()
{
    char str[] = "Hello lovely world";
    printf("My String: %s \n", str);
    ft_bzero(str, 5);
    printf("My String after bzero: %s \n", str);
}
*/