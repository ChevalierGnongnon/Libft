/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:17:50 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/25 15:32:33 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*pr1;
	char	*pr2;

	i = 0;
	pr1 = p1;
	pr2 = p2;
	while (i < n)
	{
		if (pr1[i] != pr2[i])
			return (pr1[i] - pr2[i]);
		i++;
	}
	return (0);
}
