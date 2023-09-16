/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:14:13 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/16 19:46:32 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_itoa_helper(int n)
{
	char	*str;
	int		len;
	int		sign;

	len = (n < 0) ? 1 : 0;
	sign = (n < 0) ? -1 : 1;

	if (n == 0)
		return (ft_strdup("0"));

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));

	int temp = (n < 0) ? -n : n;
	while (temp)
	{
		temp /= 10;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1)); // +1 für den Null-Terminator
	if (str == NULL)
		return (NULL);

	if (sign == -1)
		str[0] = '-';
	str[len] = '\0';

	while (len-- > 0)
	{
		str[len] = (n % 10) * sign + '0';
		n /= 10;
	}

	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;

	str = ft_itoa_helper(n);
	return (str);
}

