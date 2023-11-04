/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:50:53 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/05 00:57:59 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include "ft_substr.c" 
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strlen.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	char	*trim;
	
	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		printf("ok");
		i++;
	}
	while (j > i && ft_strchr(set, s1[j]))
	{
		j--;
		printf("%d", j);
	}
	trim = ft_substr(s1, i, j + 1);
	return(trim);
}	
int main(void)
{
	const char *s = "aacaaabonjouraacaa";
	const char *set = "ac";
	char *trim = ft_strtrim(s, set);
	printf("%s", trim);
}
