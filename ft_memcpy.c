/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:12:16 by event             #+#    #+#             */
/*   Updated: 2023/11/18 16:04:21 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst2;
	const char	*src2;

	dst2 = dest;
	src2 = src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	dest = dst2;
	return (dest);
}
