/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 07:55:23 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/28 08:20:59 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	 ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	
	i = 0;
	while ((src[i]) && i < (size - 1) && (size != 0))
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return(ft_strlen(src));
}
