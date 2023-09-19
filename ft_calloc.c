/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:22:10 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/19 11:40:04 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (nmemb > 0 && size > 0 && __SIZE_MAX__ / nmemb < size)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total_size);
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