/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:04:45 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 13:08:55 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*p_src;
	char		*p_dest;

	p_dest = (char *)dest;
	p_src = (const char *)src;
	while (n > 0)
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
		n--;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
*/

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t si1;
	size_t si2;
	size_t total_len;
	char	*n_string;

	si1 = ft_strlen((char *)s1);
	si2 = ft_strlen((char *)s2);
	total_len = si1 + si2 + 1;

	n_string = (char *)malloc(total_len);
	if (n_string)
	{
		ft_memcpy(n_string, s1, si1);
		while (*s2 != '\0')
		{
			n_string[si1++] = *s2;
			s2++;
		}
	}
	return (n_string);
}
/*
int	main()
{
	char s1[] = "Hello ";
	char s2[] = "World\n";
	char	*n_string;

	n_string = ft_strjoin(s1, s2);

	printf("This is my string 1: %s\n", s1);
	printf("This is my string 2: %s\n", s2);
	printf("This are both combined: %s\n",n_string);
	free(n_string);
}
*/