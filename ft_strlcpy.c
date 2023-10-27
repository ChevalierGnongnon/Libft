/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:59:25 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/27 15:35:32 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	size += 1;
	while ((src[i]) && (i < size - 1))
	{	
		dst[i] = src[i];
		i++;		
	}
	dst[size + 1] = '\0';
	return(strlen(src)); 
}

int main(void)
{
	const char *str1 = "abc";
	char *str2 = " ";
	size_t i;
	i = ft_strlcpy(str2, str1, 4);
	printf("%ld  aaaa", i);
}
