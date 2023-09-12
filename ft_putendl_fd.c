/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:32:17 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 08:43:55 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return;
}
*/

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	ft_putchar_fd('\n', fd);
	return ;
}

/*
int	main()
{
	char	str[] = "Hallo";

	ft_putendl_fd(str, 1);
	return (0);
}
*/