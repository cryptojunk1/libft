/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:50:25 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 16:46:58 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	negative(const char *str, int i)
{
	if (str[i] == '-') 
		return (-1);
	else  
		return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	neg;

	i = 0;
	res = 0;
	//iterate through space, new_line, ...
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	//check if negative
	neg = negative(str, i);
	//iterate through - or +
	if (neg == -1 || str[i] == 43)
		i++;
	//convert char to int
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * neg);
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