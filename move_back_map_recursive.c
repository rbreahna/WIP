/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Name.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbreahna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 20:59:32 by rbreahna          #+#    #+#             */
/*   Updated: 2016/07/27 12:53:54 by rbreahna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	char	*move_back(char *src)
{
	src = ft_strsub(src, 1, ft_strlen(src));
	return (src);
}

/*
static	char	*move_back(char *src)
{
		char	*tab;
		int		i;

	tab = ft_strnew(ft_strlen(src));
	i = 0;
	while (src[i])
	{
		tab[i] = src[i + 1];

		i++;
	}
	tab[i] = '\0';
	return (tab);
}
*/

static	void	move_back_map(char **src)
{
		int		i;

	i = 0;
	while (src[i])
	{
		src[i] = move_back(src[i]);
		i++;
	}
	return ;
}

void	move_back_map_recursive(char **src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (src[i][0] >= 'A' && src[i][0] <= 'Z')
			j = 3;
		i++;
	}
	if (j == 3)
		return;
	else 
	{
		move_back_map(src);
		move_back_map_recursive(src);
	}
}
