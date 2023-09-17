/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:22:38 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 18:59:19 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		if (*(char *)(s + i) == (char)c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char str[] = "Hello my friend";
	int	needle = 'z';

	char *ptr = ft_memchr(str, needle, ft_strlen(str));
	if (ptr != NULL)
		printf("'%c' found it!\n", needle);
	else
		printf("%c is not in the string! Try again!\n", needle);
}
*/