/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:12:16 by event             #+#    #+#             */
/*   Updated: 2023/10/19 17:25:56 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
/*#include<stdio.h>
#include<stdlib.h>*/

void	*ft_memcpy(void *dst, const void *src, size_t sze)
{
	size_t		i;
	char		*dst2;
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

/*int	main(void)
{
	const void *src = "abc";
	void *dst = malloc(3);
	char *rdest = (char *) dst;
	
	ft_memcpy(dst, src, 3);
	printf("%s", rdest);
}*/
