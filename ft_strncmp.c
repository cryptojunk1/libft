/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:17:21 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/21 11:25:29 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*us1;
	const char	*us2;
	size_t		i;

	us1 = s1;
	us2 = s2;
	i = 0;
	while ((us1[i] != '\0' || us2[i] != '\0') && i < n)
	{
		if (us1[i] < us2[i])
		{
			return (-1);
		}
		else if (us1[i] > us2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("Nr1: %d\n", ft_strncmp("Hello", "Hello", 20));
	printf("Nr2: %d\n", ft_strncmp("Hello", "Aello", 20));
	printf("Nr3: %d\n", ft_strncmp("Aello", "Hello", 20));
}
*/