/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:10:46 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/20 09:24:41 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t sze)
{
	int		i;
	const char	*src2;
	char		dst2;
	
	i = 0;
	src2 = src;
	dst2 = dst;
	if (dst2 > src2)
	{
		//Something here
	}
	else
	{
		while (i < sze)
		{
			dst2[i] = src[i];
			i++;
		}
	}
	return (dst2);
}
