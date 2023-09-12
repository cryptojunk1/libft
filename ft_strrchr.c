/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:30:36 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 09:25:23 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

/*
char *ft_strrchr(const char *s, int c);
int	ft_strlen(const char *str);

int	main()
{
	char s[] = "Hello my Friends!";
	int needle = 'k';

	char *ptr = ft_strrchr(s, needle);

	if (ptr != NULL)
		printf("'%c' found it!\n", needle);
	else
		printf("%c is not in the string! Try again!\n", needle);
}

int	ft_strlen(const char *str)
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
char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen((char *)s);
	s = s + s_len - 1;
	while (s_len > 0)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s_len--;
		s--;
	}
	return (NULL);
}
