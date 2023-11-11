/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:10:46 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/11 17:17:25 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include <stdio.h>
#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d2;
	const char	*s2;
	size_t		i;
	size_t		temp;

	temp = n;
	d2 = (char *) dest;
	s2 = (char *) src;
	i = 0;
	if (dest > src)
		while (n > 0)
		{
			d2[n] = s2[n];
			n--;
		}
	else
		while (i < temp)
		{
			d2[i] = s2[i];
			i++;
		}
	return (d2);
}

int main(void)
{
	char *dest = "   ";
	const char *src = "abc";

	printf("%s", (char *) ft_memmove(dest, src, 2));
}

