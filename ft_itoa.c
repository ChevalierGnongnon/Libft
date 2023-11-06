/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:05:44 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/06 13:52:20 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
static int	ft_definesize(int n)
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

char *ft_itoa(int n)
{
	char *str;
	
	str = (char *) malloc(ft_definesize(n));
	
}

int main(void)
{

}
