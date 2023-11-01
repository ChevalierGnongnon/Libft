/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:02:30 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/01 16:30:53 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
        sub = (char *) malloc(len + 1);
	if(!sub)
		return (NULL);
	if(strlen(s) > start)
	{
		while(i < len && s[i])
		{
			sub[i] = s[start + i];
			i++;
		}
	}
	sub[i] = '\0';
	return (sub);
}
int main(void)
{
	char	*str1 = "abcdef";
	char	*sub = ft_substr(str1, INT_MAX, INT_MAX);
	printf("%s", sub);
}
