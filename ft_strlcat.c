/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 07:05:51 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/29 11:41:57 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = strlen(dst);
	j = 0;
	if (size == 0 || size <= strlen(dst)) 
		return (size + strlen(src));
	while ((src[j] != '\0') && ((j + i) < size - 1))
	{
		dst[i + j] = src[j];
		j++; 
	}
	if (j < size)
		dst[i + j] = '\0';
	return (i + j);
}
