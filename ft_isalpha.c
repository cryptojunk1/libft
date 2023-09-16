/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:07:27 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/16 13:56:34 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
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