/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:18:07 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:44:52 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	else if (c >= 97 && c <= 122)
		return (c);
	return (c);
}

/*
int	main()
{
	char c = 'A';
	
	printf("lowercase of my %c is %c\n", c, ft_tolower(c));
	
}
*/