/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:00:12 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/01 17:28:10 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	fsize;
	char	*join;
	
	i = 0;
	j = 0;
	fsize = strlen(s1) + strlen(s2) + 1;
	join = (char *) malloc(fsize);
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return(join);
}
int main(void)
{
	char *s1 = "abc";
	char *s2 = "def";
	char *s3 = ft_strjoin(s1, s2);
	printf("%s", s3);
}
