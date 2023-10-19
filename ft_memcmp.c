/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:17:50 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/19 20:24:18 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	ft_memcmp(void *p1, void *p2, size_t sze)
{
	size_t	i;
	char	*pr1;
	char	*pr2;

	i = 0;
	pr1 = p1;
	pr2 = p2;
	while (i < sze)
	{
		if (pr1[i] != pr2[i])
			return (pr1[i] - pr2[i]);
		i++;
	}
	return (0);
}

int main(void)
{
	char *str1 = "cv";
	char *str2 = "cb";

	printf("%d \n %d", ft_memcmp(str1, str2, 5), memcmp(str1, str2, 5));
} 
