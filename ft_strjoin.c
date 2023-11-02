/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:00:12 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/02 09:01:15 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	cs1;
	size_t	cs2;
	char	*s3;
	size_t	i;
	
	i = 0;	
	cs1 = strlen(s1);
	cs2 = strlen(s2);
	s3 = (char *) malloc(cs1 + cs2 +1);
	while (i < ((cs1 + cs2) / 2))
	{
		s3[i] = s1[i];
		s3[cs1 + i] = s2[i];
		i++;
	}
	s3[cs1 + cs2] = '\0';
	return (s3);
}
int main(void)
{
	char *s1 = "abc";
	char *s2 = "def";
	char *s3 = ft_strjoin(s1, s2);
	printf("%s", s3);
}
