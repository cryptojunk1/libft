/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:50:25 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:42:56 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		res;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res);
}

/*
int	main()
{
	char str[] = "1233456ßkf";
    int j;
    
	j = ft_atoi(str);
    printf("Changed from char to int: %d\n", j);
	return (0);
}
*/