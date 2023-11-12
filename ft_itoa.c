/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:05:44 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/12 11:05:41 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getsize(long long n)
{
	size_t	j;
	
	if (n == 0)
		return (1);
	j = 0;
	if (n < 0)
	{
		j++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		j++;
	}
	return (j);
}

static char	*ft_alloc(long long n)
{
	char	*s;

	if (n >= 0)
		s = (char *) ft_calloc((size_t) ft_getsize(n) + 1, 1);
	else
		s = (char *) ft_calloc((size_t) ft_getsize(n) + 2, 1);
	return (s);
}

char	*ft_itoa(int n)
{
	char		*str;
	int		i;
	long long	castn;

	castn = (long long) n;
	str = ft_alloc(castn);
	i = ft_getsize(castn) - 1;
	if (!str)
		return (NULL);
	if (castn < 0)
	{
		str[0] = '-';
		castn *= -1;
	}
	str[i + 1] = '\0';
	while (i >= 0 && castn > 0)
	{
		str[i] = (castn % 10) + '0';
		castn /= 10;
		i--;
	}
	return (str);
}
