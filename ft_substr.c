/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:02:30 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/06 12:43:41 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "ft_calloc.c"
#include "ft_strlen.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	
	i = 0;
	if (len == 0 || ft_strlen(s) <= start)
	{
		sub = ft_calloc(1, 1);
		return (sub);
	}
	else if (ft_strlen(s) > len)
		sub = ft_calloc(len + 1, 1);
	else
		sub = ft_calloc(ft_strlen(s) + 1, 1);
	if (!sub)
		return (NULL);
	while(i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);	
}
