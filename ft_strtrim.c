/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:09:35 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/17 18:05:38 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  s_len;
    size_t  start;
    size_t  end;
    size_t  end_len;
    char    *new_string;

    s_len = ft_strlen((char *)s1);
    start = 0;
    end = s_len - 1;
    //iterate throug found chars in s1
    while (start < s_len && ft_strchr(set, s1[start]))
    {
        start++;
    }
    //go back from end to start and look for chars from set
    while (end > start && ft_strchr(set, s1[end]))
    {
        end--;
    }
    //calc the final lengh of the new string and allocate memory
    end_len = end - start + 1;
    new_string = (char *)malloc(end_len +1);
    if (!new_string)
        return (NULL);
    //copy everything into the new string
    if (new_string)
    {
        ft_memcpy(new_string, s1 + start, end_len);
        new_string[end_len] = '\0';
    }
    return (new_string);
}
/*
int main()
{
    char const *original = "   Hallo, Welt!   ";
    char const *set = " ,";

    char *trimmed = ft_strtrim(original, set);

    if (trimmed)
    {
        printf("Original: \"%s\"\n", original);
        printf("Bereinigt: \"%s\"\n", trimmed);

        free(trimmed);
    }
    else
    {
        printf("Fehler bei der Speicherzuweisung.\n");
    }

    return 0;
}
*/