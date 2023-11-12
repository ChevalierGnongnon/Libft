/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:36:52 by event             #+#    #+#             */
/*   Updated: 2023/11/12 14:21:53 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t lng)
{
	size_t	i;

	i = 0;
	while ((i < lng) && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] == '\0')
				return (-1);
			else if (str2[i] == '\0')
				return (1);
			else
				return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}
