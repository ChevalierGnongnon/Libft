/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:10:46 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/09 13:27:15 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d2;
	const char	*s2;
	size_t		i;

	d2 = dest;
	s2 = src;
	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			d2[n] = s2[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			d2[i] = s2[i];
			i++;
		}
	}
	dest = d2;
	return (dest);
}

int main(void)
{
	char *src = "abcdef";
	char *dst = "";
	
	ft_memmove(dst, src, 3);
}		
