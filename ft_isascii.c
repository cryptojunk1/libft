/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:43:00 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/16 14:00:11 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
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