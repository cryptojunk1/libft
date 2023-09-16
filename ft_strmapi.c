/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:21:06 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/15 16:19:14 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*
Prototype 
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

Parameters
s: The string on which to iterate.
f: The function to apply to each character.

Return value 
The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.

Description 
Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting from successive applications of ’f’.
*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *res;
    unsigned int    len;

    i = 0;
    len = 0;
    if (s == NULL || f == NULL)
        return NULL;
    // Ermitteln der Länge des Eingabe-Strings s
    while (s[len] != '\0')
        len++;
    // Speicherplatz für den neuen String reservieren
    res = (char *)malloc(len + 1);
    if (res == NULL)
        return NULL;
    // Anwenden der Funktion f auf jeden Buchstaben
    while (i < len)
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[len] = '\0';
    return res;
}
