/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strenstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:16:55 by event             #+#    #+#             */
/*   Updated: 2023/10/23 18:02:57 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<string.h>
#include<stdio.h>
char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (lit[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == lit[0])
		{
			while (lit[j] && (big[i + j] == lit[j]) && (i + j < len))
				j++;
		}
		i++;
	}
	if (j == strlen(lit) - 1)
		return ((char *)big[len - j]);
	else
		return (NULL);
}

int main(void)
{
	char *str1 = "abcnecdef";
	char *str2 = "cde";
	
	printf("%s", ft_strnstr(str1, str2, 9));
}	
