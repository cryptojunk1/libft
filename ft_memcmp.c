/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:59:16 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 16:21:23 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1;  // Zeiger auf den ersten Speicherblock s1 als Byte-Zeiger
    const unsigned char *p2;  // Zeiger auf den zweiten Speicherblock s2 als Byte-Zeiger
    
	p1 = s1;
	p2 = s2;
    // Durchsuche die Speicherblöcke für maximal n Bytes
    while (n > 0)
    {
        if (*p1 != *p2)  // Vergleiche das aktuelle Byte in s1 mit dem in s2
        {
            return *p1 - *p2;  // Gebe die Differenz zwischen den Bytes zurück
        }
        
        p1++;  // Gehe zum nächsten Byte in s1
        p2++;  // Gehe zum nächsten Byte in s2
        n--;   // Reduziere die verbleibende Anzahl der zu vergleichenden Bytes
    }
    
    return 0;  // Die Speicherblöcke sind gleich
}
/*
int main()
{
    int    s1[] = {1,1,3,4,5,6,8,9};
    int    s2[] = {1,2,3,4,5,6,7,8,9};

    
    printf("%d", ft_memcmp(s1, s2, 18));
}
*/