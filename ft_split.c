/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:53:57 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/15 10:24:53 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c)
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

static char	*ft_duplicate(char *s)
{

}

static void	ft_free()
{

}
char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**arr;
	
	i = 0;
	arr = ft_calloc(ft_count(s, c), sizeof(char));
	return (arr);
}
