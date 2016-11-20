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

void	ft_put_tetra(char **dest, char *src, int n, spoint c)
{
	spoint	p;
	int x;

	p.r = 0;
	p.c = 0;
	x = c.c;
	while (isolate(src, n)[p.r] && dest[c.r])
	{
		while (isolate(src, n)[p.r][p.c] && dest[c.r][c.c])
		{
			if (isolate(src, n)[p.r][p.c] >= 'A' && 
				isolate(src, n)[p.r][p.c] <= 'Z' && 
				dest[c.r][c.c] == '.')
				dest[c.r][c.c] = isolate(src, n)[p.r][p.c];
			p.c++;
			c.c++;
		}
		p.c = 0;
		c.c = x;
		p.r++;
		c.r++;
	}
}
/* older code
void	ft_put_tetra(char **dest, char *src, int n, spoint c)
{
	int	i;
	int	j;
	int x;

	i = 0;
	j = 0;
	x = c.c;
	while (isolate(src, n)[i] && dest[c.r])
	{
		while (isolate(src, n)[i][j] && dest[c.r][c.c])
		{
			if (isolate(src, n)[i][j] >= 'A' && isolate(src, n)[i][j] <= 'Z')
			{
				dest[c.r][c.c] = isolate(src, n)[i][j];
			}
			j++;
			c.c++;
		}
		j = 0;
		c.c = x;
		i++;
		c.r++;
	}
}
*/
/*
void	ft_put_tetra(char **dest, char **src, point c)
{

	int	i;
	int	j;
	int x;
	i =	0;
	j =	0;
	x = c.coloana;
	while (src[i])
	{
		while(src[i][j])
		{
			if (src[i][j]>= 'A' && src[i][j] <= 'Z')
			{
				dest[c.rind][c.coloana] = src[i][j];
			}
			j++;
			c.coloana++;
		}
		j = 0;
		c.coloana = x;
		i++;
		c.rind++;
	}
return;
}
*/