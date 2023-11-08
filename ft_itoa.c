/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:05:44 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/07 15:20:25 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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
		s = (char *) malloc(ft_getsize(n) + 1);
	else
		s = (char *) malloc(ft_getsize(n) + 2);
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	i;
//	int	mult;
	
	str = ft_alloc(n);
	i = 0;
//	mult = 10;
	if (!str)
		return (NULL);
	if(n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	i = ft_getsize(n + 1);
	printf("before loop : i : %d n : %d\n", i, n); 
	while(i > 0 && n > 0)
	{
		printf("i : %d n : %d \n", i, n);
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	str[ft_getsize(n) + 1] = '\0';
	return (str);
}

int main(void)
{
	int a = -123;
	char *str = ft_itoa(a);
	printf("%s", str);
}
