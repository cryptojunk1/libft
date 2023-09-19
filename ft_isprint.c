/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:48:06 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/19 11:59:07 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main()
{
	printf("%d", ft_isprint('d'));
	printf("%d", ft_isprint('0'));
	printf("%d", ft_isprint(0));
	printf("%d", ft_isprint(' '));
	printf("%d", ft_isprint('Z'));


}
*/