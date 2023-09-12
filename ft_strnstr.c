/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:30:11 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 09:23:19 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

/*
int	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/
char	*ft_strnstr(const char *s, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	n = ft_strlen((char *)s);
	if (*find == '\0')
		return ((char *)s);
	while (s[i] != '\0' && i < n)
	{
		j = 0;
		while (s[i + j] == find[j] && i + j < n)
		{
			j++;
			if (find[j] == '\0')
				return ((char *)s + i);
		}
		i++;
	}
	return (0);
}

/*
int main(void)
{
    char str[] = "alsdjHelaljHellonakncoa";
    char find[] = "scs";

    char *ptr = ft_strnstr(str, find, sizeof(str));

    if (ptr != NULL)
    {
        printf("Found: %s\n", ptr);
    }
    else
    {
        printf("Not found.\n");
    }

    return 0;
}
*/