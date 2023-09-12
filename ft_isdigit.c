/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:32:24 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:43:01 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

unsigned int	ft_isdigit(unsigned char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
	{
		return (0);
	}
}
/*
int	main()
{
	printf("%d", ft_isdigit('d'));
	printf("%d", ft_isdigit('0'));
	printf("%d", ft_isdigit(0));
	printf("%d", ft_isdigit(' '));
	printf("%d", ft_isdigit('Z'));
}
*/