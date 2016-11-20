/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array_from_file.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbreahna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 20:59:32 by rbreahna          #+#    #+#             */
/*   Updated: 2016/07/27 12:53:54 by rbreahna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*create_array_from_file(int fd)
{
	char	*tab;
	char	*tmp;
	char	c;
	int		i;

	i = 0;
	tab = ft_strnew(10);
	while (read(fd, &c, 1))
	{
		tmp = ft_strnew(i+1);
		if (c == '\n')
		{
			tab[i++] = '%';
			read(fd, &c, 1);
		}
		tab[i++] = c;
		tab = ft_strjoin(tab, tmp);
	}
	return (tab);
}

/* old code
char	*create_array_from_file(int fd)
{
	char	*tab;
	char	c;
	int		i;

	i = 0;
	tab = ft_strnew(2);
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			tab[i++] = '%';
			read(fd, &c, 1);
		}
		tab[i++] = c;
		tab = ft_strjoin(tab, ft_strnew(1));
	}
	return (tab);
}
*/