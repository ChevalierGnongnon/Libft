/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:53:57 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/13 13:39:13 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(const char *s, char c)
{
	size_t	i;
	size_t	cnt;
	
	cnt = 0;
	i = 0;
	while(s[i])
	{	
		if ((s[i] == c || s[i] == '\0') == 0 
			&& (s[i + 1] == c  || s[i + 1] == '\0') == 1)
			cnt++;
		i++;
	}
	return(cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int	i;

	str = ft_calloc(ft_count(s, c) + 1, sizeof(char));
	i = 0;
	while (str[i])
}

int main(void)
{
	size_t	cnt;
	const char	s[] = "     abc         def      ";

	cnt = ft_count(s, ' ');
	printf("%ld", cnt);
}
