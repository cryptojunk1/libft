/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:38:21 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:42:53 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

unsigned int	ft_isalnum(unsigned char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
	{
		return (0);
	}
}
/*
int	main()
{
	printf("%d", ft_isalnum('d'));
	printf("%d", ft_isalnum('0'));
	printf("%d", ft_isalnum(0));
	printf("%d", ft_isalnum(' '));
	printf("%d", ft_isalnum('Z'));
}
*/