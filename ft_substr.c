/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:33:14 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 11:44:51 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	strlen;
	size_t	i;

	if (s == NULL)
		return (NULL);

	strlen = ft_strlen(s);

	if (start >= strlen)
		return (ft_strdup(""));

	if (len > strlen - start)
		len = strlen - start;

	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';

	return (substr);
}




/*
int	main()
{
	char src[] = "ajskdjaHelloasdj";

	printf("This is my whole string: %s\n", src);
	printf("This is my sub string: %s", ft_substr(src, 6, 6));
}
*/