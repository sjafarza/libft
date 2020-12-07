/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:06:08 by saray             #+#    #+#             */
/*   Updated: 2020/12/06 18:08:40 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct s_split_next
{
	size_t	start;
	size_t	length;
}t_split_next;

void	*ft_memset(void *str,int c,size_t n);
void	ft_bzero(void *s,size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src,int c, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int	ft_memcmp(const void *str1,const void *str2, size_t n);
size_t	ft_strlen(const char *str);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int caractere);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
size_t	ft_strlcpy(char *dst,const char *src,size_t size);
size_t	ft_strlcat(char *dst,const char *src,size_t size);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);


#endif
