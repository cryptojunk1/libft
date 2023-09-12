/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:22:38 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 09:21:22 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

/*
int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p_s;

	p_s = (const char *)s;
	n = ft_strlen((char *)s);
	while (p_s != NULL && n > 0)
	{
		if (*p_s == c)
		{
			return ((char *)p_s);
		}
		p_s++;
		n--;
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