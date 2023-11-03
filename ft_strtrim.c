/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:50:53 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/03 14:01:58 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Pour check si dans s1[i] il y a une des lettres de set, 1 si oui 0 si non 
static int	ft_checkChar(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);			 
}

//Pour aller jusquve la fin de la partie a trim au debut
static size_t	ft_gostart(const char *s, const char *set)
{
	int	check;
	size_t	i;

	check = 1;
	i = 0;
	while ((s[i]) && (check == 1))
	{
		check = ft_checkChar(set, s[i]);
		i++;
	}
	return (i);
}

//Meme chose mais a l envers 
static size_t	ft_goend(char *s)
{

}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	j;
	size_t	k;

	j = 0;
	while (s1[i] && check == 1)
}	
