/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:18:28 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:44:56 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	else if (c >= 65 && c <= 90)
		return (c);
	return (c);
}
/*
int	main()
{
	char c = 'A';
	printf("lowercase of %c is %c\n", c, tolower(c));
	printf("uppercasecase of %c is %c\n\n", c, toupper(c));

	printf("lowercase of %d is %d\n", c, tolower(c));
	printf("uppercasecase of %d is %d\n", c, toupper(c));

	printf("uppercase of my %c is %c\n", c, ft_toupper(c));
	
}
*/