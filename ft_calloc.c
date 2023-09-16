/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:22:10 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/16 16:24:25 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
/*
void	ft_bzero(void *str, unsigned int n)
{
	char *ptr;

	ptr = (char *)str;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nmemb);
	return (ptr);
}

/*
int main()
{
    int *numbers;
    int i;
	int	size;

    i = 0;
	size = 5;
    numbers = ft_calloc(size, sizeof(int));
    if (numbers == NULL)
    {
        printf("Error, nothing happened! Try again\n");
        return (1);
    }
        while (i < size) 
        {
        printf("%d ", numbers[i]);
		i++;
        }

    free(numbers);

    return 0;

}
*/