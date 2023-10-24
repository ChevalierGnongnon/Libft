/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:16:55 by event             #+#    #+#             */
/*   Updated: 2023/10/24 11:57:59 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<string.h>
#include<stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (lit[0] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		if (big[i] == lit[0])
		{
			while (lit[j] && (big[i + j] == lit[j]) && (i + j < len))
				j++;
		}
		i++;
	}
	if (j == ft_strlen(lit))
		return ((char *) &big[len - j]);
	else
		return (NULL);
}

int main(void)
{
	char *str1 = "abcnecdef";
	char *str2 = "abc";
	
	printf("%s", ft_strnstr(str1, str2, 9));
}	
