/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 08:11:12 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/30 10:15:13 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>
#include<strings.h>
#include<stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	
	ptr = (void *) malloc(nmemb * size);
	if (ptr == NULL)
                return (NULL);
	bzero(ptr, nmemb * size);
	return (ptr);
}
int main(void)
{
	void *ptr;
	ptr = ft_calloc(12345678, 456);
	printf("%p", ptr);
}