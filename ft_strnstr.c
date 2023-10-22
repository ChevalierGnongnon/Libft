/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 09:18:23 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/22 15:22:29 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	cnt;
	size_t	j;

	i = 0;
	cnt = 0;
	if (lit[0] == '\0' || !lit)
		return ((char *)big);
	while (lit[i])
	{
		j = i;
		while ((big[i + cnt] == lit[0 + cnt]))
		{
			cnt++;
		}
		i++;
	}
	if (cnt == len)
		return ((char *)&big[i - cnt]);
	else
		return(NULL);
}

int main(void)
{
	char *str1 = "abcdefcde";
	char *str2 = "cde";
	
	printf("%s", ft_strnstr(str1, str2, 7));
	//printf("%s", strnstr(str1, str2, 3));
}
