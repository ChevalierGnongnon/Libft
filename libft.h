/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:38:22 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/24 16:08:31 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT.H
# define LIBFT.H
#include<stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int val, size_t cnt);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dst, const void *src size_t sze);
void	*ft_memmove(void *dst, const void *src, size_t sze);
size_t	ft_strlcpy(char *dst, const char *src, size_t sze);
size_t	ft_strlcat(char *dst, const char *src, size_t sze)
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *str, int schar);
char	*ft_strrchr(const char *str, int schar);
int	ft_strncmp(const char *s1, const char *s2, size_t len);
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t sze);
char	*ft_strnstr(const char *big, const char *lit, size_t len);
int	ft_atoi(const char *str);
void	ft_calloc(size_t ecnt, size_t esze);
char	ft_strdup(const char *src);
 
