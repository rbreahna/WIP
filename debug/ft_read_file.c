/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbraghis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 11:43:00 by dbraghis          #+#    #+#             */
/*   Updated: 2016/07/26 16:44:28 by rbreahna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"



char	*ft_realloc(char *old_tab, int size)
{
	char	*new_tab;
	int		i;

	i = 0;
	new_tab = (char*)malloc(size);
	while (old_tab[i] && i < size)
	{
		new_tab[i] = old_tab[i];
		i++;
	}
	new_tab[i] = '\0';
	free(old_tab);
	return (new_tab);
}

char	*ft_realloc_array(char *tab, char *tab2, int i, int j)
{
		tab2 = ft_realloc(tab, j);
		tab = (char*)malloc(sizeof(char) * j);
		tab = tab2;
		tab[i] = '\0';
		return(tab);
}
//char	*ft_read_in_tab(char c, )

char	*create_array_file(int fd)
{

	char	c;
	int		j;
	char	*tab;
	char	*tab2;
	int		i;

	i = 0;
	j = 0;

	tab = (char*)malloc(sizeof(char) * 1);
	tab2 = ft_strnew(j);
	read(fd, &c, 1);
	while (c != '\n')
	{
		tab[i] = c;
		read(fd, &c, 1);
	if (c == '\n')
		{
			j = 1;
			tab[++i] = '%';
			read(fd, &c, 1);

		}
	if (c == '\n')
	read(fd, &c, 1);
		j += ++i;
		
tab = ft_realloc_array(tab, tab2, i, j);
	}
	return (tab);
}
/*

char	g_c;
int		g_j;
char	*g_tab;
char	*g_tab2;

char	*create_array_file(int fd)
{
	int		i;

	g_tab = (char*)malloc(sizeof(char) * 1);
	i = 0;
	g_j = 0;
	read(fd, &g_c, 1);
	while (g_c !='\n')
	{
		g_tab[i] = g_c;
		read(fd, &g_c, 1);
		if (g_c == '\n')
		{
			i++;
			g_j = 1;
			g_tab[i] = '%';
			read(fd, &g_c, 1);
		}
		i++;
		g_j = g_j + i;
		g_tab2 = ft_realloc(g_tab, g_j);
		g_tab = (char*)malloc(sizeof(char) * g_j);
		g_tab = g_tab2;
		g_tab[i] = '\0';
	}
	return (g_tab);
}
*/