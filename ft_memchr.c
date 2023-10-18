/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:22:38 by event             #+#    #+#             */
/*   Updated: 2023/10/18 10:33:46 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *mblock, int schar, size_t sze)
{
	int		i;
	char	*str;

	i = 0;
	str = nblock;
	while (i < sze)
	{
		if (str[i] == schar)
			return (&str[i]);
		else
			i++;
	}
	return (NULL);
}					
