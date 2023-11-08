/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:05:44 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/08 11:52:26 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "ft_calloc.c"

static int	ft_getsize(int n)
{
	size_t	j;
	
	j = 0;
	while (n != 0)
	{
		n /= 10;
		j++;
	}
	return (j); 
}

static char	*ft_alloc(int n)
{
	char	*s;

	if(n >= 0)
		s = (char *) ft_calloc(ft_getsize(n) + 1, 1);
	else
		s = (char *) ft_calloc(ft_getsize(n) + 2, 1);
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	i;
	int	stock;
	
	stock = ft_getsize(n) + 1;
	str = ft_alloc(n);
	i = ft_getsize(n);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while((i >= 0 || str[i] == '-') && n > 0)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	str[stock] = '\0';
	return (str);
}

int main(void)
{
	int a = -123;
	char *str = ft_itoa(a);
	printf("%s", str);
	free(str);
}
