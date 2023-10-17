/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:43:42 by event             #+#    #+#             */
/*   Updated: 2023/10/17 12:57:07 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int schar)
{
	int	j;

	j = ft_strlen(str);
	while (j >= 0)
	{
		if (str[j] == schar)
			return (str[j]);
		else
			j++;
	}
	return (NULL);
}	
