/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:04:45 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 17:47:09 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{	
	if (!s1 && !s2)
        return NULL;

	size_t si1;
    size_t si2;
    size_t i;
    size_t j;
    size_t total_len;
    char    *res;
	//check str lenghts and set counters to it
    si1 = ft_strlen((char *)s1);
    si2 = ft_strlen((char *)s2);
	//calc the total lengh of the new string + 1 for \0
    total_len = si1 + si2 + 1;
    res = (char *)malloc(total_len);
    if(!res)
	return (NULL);
    //copy first string and then second afterwards
    i = 0;
    j = 0;
    while (i < si1)
    {
		res[i] = s1[i];
		i++;
	}
	while (j < si2)
	{
			res[i + j] = s2[j];
			j++;
	}
	res[i + j] = '\0';
    return (res);
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