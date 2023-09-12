/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:29:58 by rmessner          #+#    #+#             */
/*   Updated: 2023/09/12 13:11:21 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *str, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
unsigned int	ft_isalnum(unsigned char c);
unsigned int	ft_isalpha(unsigned char c);
unsigned int	ft_isascii(unsigned char c);
unsigned int	ft_isdigit(unsigned char c);
unsigned int	ft_isprint(unsigned char c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			ft_memset(void *s, int c, size_t i);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
unsigned int	ft_strlcat(char *dest, char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *s, const char *find, size_t n);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char            *ft_strjoin(char const *s1, char const *s2);
char            *ft_strtrim(char const *s1, char const *set);