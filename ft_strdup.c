/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:28:23 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 17:27:55 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (ptr != NULL)
	{
		ft_strlcpy(ptr, (char *)s, ft_strlen((char *)s) + 1);
	}
	return (ptr);
}
/*
int	main()
{
    const char *src = "Hello, World!";
    char *dest = ft_strdup(src);

    if (dest != NULL) {
        printf("Original: %s\n", src);
        printf("Copied Version: %s\n", dest);

        free(dest);
    } 
	else 
	{
        printf("Something went wrong my friend... Lets try again!\n");
    }
    return 0;
}
*/