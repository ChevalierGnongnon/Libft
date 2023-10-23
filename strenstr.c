/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strenstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:16:55 by event             #+#    #+#             */
/*   Updated: 2023/10/23 17:07:29 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if (lit[0] == '\0')
		return (big);
	while (i < len && big[i])
	{
		if (big[i] == lit[0])
		{
			while ((big[i + j] == lit[j]) && (i + j < len))
			{
				j++;
			}
		}
		i++;
	}
}
