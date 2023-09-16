/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:38:21 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/16 13:56:35 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
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