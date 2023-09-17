/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:30:11 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 16:35:03 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *search, size_t len)
{
    size_t search_len;

	search_len = ft_strlen(search);
	// Wenn der zu suchende Teilstring leer ist, gebe den gesamten haystack zurück
    if (search_len == 0)
        return (char *)haystack;
    while (*haystack != '\0' && len >= search_len)
    {
        if (*haystack == *search)
        {
            // Potenzielle Übereinstimmung gefunden, überprüfe die verbleibenden Zeichen
            if (ft_strncmp(haystack, search, search_len) == 0)
                return (char *)haystack;  // Übereinstimmung gefunden, gebe den Zeiger auf den Anfang zurück
        }   
        haystack++;
        len--;
    }
    return NULL;  // Keine Übereinstimmung gefunden
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