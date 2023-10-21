/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 09:18:23 by chhoflac          #+#    #+#             */
/*   Updated: 2023/10/21 11:52:04 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
	
char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	cnt;
 	size_t	j;

	i = 0;
	cnt = 0;
	j = 0;
	while ((i < len) && (big[i]))
	{
		while ((big[j + cnt] == lit[j + cnt]) && (cnt < len))
		{
			cnt++;
		}
		i++;
	}
	if (cnt == len)
		return (big[j - cnt])
	else
		return(null);
}

int main(void)
{
	char *str1 = "abcdef";
	char *str2 = "cde";
	
	printf("%p %p", ft_strnstr(str1, str2, 3), strnstr(str1, str2, 3));
}

