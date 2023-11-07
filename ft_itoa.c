/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:05:44 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/07 08:35:42 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
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

char *ft_itoa(int n)
{
	char	*str;
	int	size;
	
	s = ft_alloc(n);
}

int main(void)
{

}
