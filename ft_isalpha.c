/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:07:27 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 09:14:12 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

unsigned int	ft_isalpha(unsigned char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
	{
		return (0);
	}
}
/*
int	main()
{
	printf("%d", ft_isalpha('d'));
	printf("%d", ft_isalpha('0'));
	printf("%d", ft_isalpha(0));
	printf("%d", ft_isalpha(' '));
	printf("%d", ft_isalpha('Z'));
}
*/