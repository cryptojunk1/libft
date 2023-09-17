/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:14:13 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 18:57:58 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int get_num_len(int n)
{
    int len = 1;
    while (n /= 10)
        len++;
    return len;
}

static int	ft_is_negative(int n)
{
	if (n < 0)
		return (1);
	else 
		return (0);
}

char *ft_itoa(int n)
{
    int	num_len;
	int	is_negative;
	char	*res;

	// Min Int proof
	if (n == -2147483648)
        return ft_strdup("-2147483648");
    //get lenght of number
    num_len = get_num_len(n);
    //check if negative
    is_negative = ft_is_negative(n);
    if (is_negative)
        n = -n;
    //reserve space with malloc and 
    res = (char *)malloc((num_len + is_negative + 1) * sizeof(char));
    if (!res)
        return NULL;
    res[num_len + is_negative] = '\0';
    // then write backwards the numbers and transform them into chars with '0'
    while (num_len > 0)
    {
        res[num_len + is_negative - 1] = (n % 10) + '0';
        n /= 10;
        num_len--;
    }
    //check if negativ is true and place a - in to it
    if (is_negative)
        res[0] = '-';
    return res;
}

