/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 07:05:51 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/29 09:29:19 by chhoflac         ###   ########.fr       */
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
	while ((src[j] != '\0') && (j < size - 1))
	{
		dst[i + j] = src[j];
		j++; 
	}
	if (j < size)
		dst[j + i] = '\0';
	return (i + j + 1);
}
/*int main(void)
{
	char str1[7] = {'a', 'b', 'c'};
	const char *str2 = "def";
	size_t i = ft_strlcat(str1, str2, 7);
	printf("%s, %ld", str1, i);
}*/
