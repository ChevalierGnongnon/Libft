/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:09:00 by event             #+#    #+#             */
/*   Updated: 2023/10/19 16:32:42 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t sze)
{
	size_t	i;
	char	*dst2;
	const char	*src2;

	dst2 = dst;
	src2 = src;  
	i = 0;
	while (i < sze)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst2);
}

int	main(void)
{
	const void *src = "abc";
	void *dst = "";
	
	ft_memcpy(dst, src, 3);
	printf("%s", dst);
}
