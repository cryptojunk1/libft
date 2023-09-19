/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:50:25 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/19 11:53:03 by rmessner         ###   ########.fr       */
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
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	neg = negative(str, i);
	if (neg == -1 || str[i] == 43)
		i++;
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