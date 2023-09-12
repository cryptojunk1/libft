/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:43:00 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 09:14:35 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

unsigned int	ft_isascii(unsigned char c)
{
	if (c > 0 && c <= 127)
		return (1);
	else
	{
		return (0);
	}
}
/*
int	main()
{
	printf("%d", ft_isascii('d'));
	printf("%d", ft_isascii('0'));
	printf("%d", ft_isascii(0));
	printf("%d", ft_isascii(' '));
	printf("%d", ft_isascii('Z'));
}
*/