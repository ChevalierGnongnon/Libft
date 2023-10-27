/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:59:25 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/27 17:38:08 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	
	i = 0;
	while ((src[i]) && (i < size - 1) && dst[i])
	{	
		dst[i] = src[i];
		i++;		
	}
	dst[i] = '\0';
	return(strlen(src)); 
}

int main(void)
{
	const char *str1 = "abc";
	char *str2 = NULL;
	size_t i;
	i = ft_strlcpy(str2, str1, 4);
	printf("%ld %s", i, str2);
}
