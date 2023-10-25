/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:10:46 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/25 15:35:21 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	const char	*src2;
	char		*dst2;

	i = -1;
	src2 = src;
	dst2 = dest;
	if (dst2 > src2)
	{
		i = n;
		while (--i > 0)
			dst2[i] == src2[i];
	}
	else if (dst2 < src2)
	{
		while (++i < n)
			dst2[i] = src2[i];
	}
	else if (dst2 == src2)
		return (dst2);
	return (dst2);
}
