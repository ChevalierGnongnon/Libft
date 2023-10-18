/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 07:10:13 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/18 07:20:31 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_memset(void *ptr, int val, size_t cnt)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ptr;
	while (i < cnt && str[i] != '\0')
	{
		str[i] = val;
		i++;
	}
	return (str);
}

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
	return (str);
}	
