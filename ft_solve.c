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

static int		ft_sqrt(int nb)
{
	int i;
	int sq;

	i = 0;
	sq = 0;
	while (i <= nb / 2)
	{
		sq = i * i;
		if (sq >= nb)
			return (i);
		i++;
	}
	return (0);
}

//void recursive_put_tetra(char **dest, char *src, int n, spoint c)
//{
		
//}


void short_solve(char **dest, char *src, int n, spoint c)
{
	if (check_nalpha(dest, n)==0)
		ft_put_tetra(dest, src, n, c);
		if (check_nalpha(dest, n)==0)
		{
			del_tetra(dest, n);
			c.c++;
			if (!(dest[c.r][c.c]))
			{
				c.r++;
				c.c = 0;
			}
			short_solve(dest, src, n, c);
		}
		else
		{
			n = 0;
			
			return;		
		}
}


char	**ft_solve(char *src)
{
	spoint	c;
	int n;
	int m;	
	char	**dest;

	m = ft_sqrt(tetra_num(src)*4);
	dest = ft_map(m, m, '.');
	while (check_alpha(dest, src)==0)
	{
		
		dest = ft_map(m, m, '.');
		n = 0;
		c.r = 0;
		c.c = 0;
		short_solve(dest, src, n, c);
		m++;
	}
	return(dest);
}



/*	
void backtrack_tetra(char **dest, char *src, int n, spoint c)
{
	ft_put_tetra(dest, src, n, c)
	if (check_nalpha(dest, n)==0)
	{
		del_tetra(dest, n);
		//del_tetra(dest, n -1);
		//ft_put_tetra(dest, src, n+1, p);
	}
	return;
}
*/
/*
	void recursive_put_tetra(char **dest, char *src, int n, spoint c)
	{
	if (dest[c.r][c.c]=='.' && (n <= tetra_num(src) - 1) && dest[c.r][c.c])
	{

		if (check_nalpha(dest, n)==0)
			ft_put_tetra(dest, src, n, c);

		if (check_nalpha(dest, n)==0)
		{
			del_tetra(dest, n);
			//del_tetra(dest, n -1);
			c.c++;
			if (!(dest[c.r][c.c]))
			{
				c.r++;
				c.c = 0;
			}
			ft_put_tetra(dest, src, n, c);
			n = 0;
			c.c = 0;
			c.r = 0;
			//ft_put_tetra(dest, src, n+1, p);
		}

		if (check_nalpha(dest, n)==1)
		{
			n++;
			c.c++;
		}
			if (!(dest[c.r][c.c]))
			{
			c.r++;
			c.c = 0;
			}
		}
	if (!dest[c.r])
	return;
	else
	recursive_put_tetra(dest, src, n, c);
	}
*/
/*
char	**ft_solve(char *src)
{
	spoint	c;
	int n;
	int m;	
	char	**dest;

	m = ft_sqrt(tetra_num(src)*4);
	dest = ft_map(m, m, '.');
	while (check_alpha(dest, src)==0)
	{
		
		dest = ft_map(m, m, '.');
		n = 0;
		c.r = 0;
		c.c = 0;
		recursive_put_tetra(dest, src, n, c);
		m++;
	}
	return(dest);
}

*/







/*
static void recursive_put_tetra(char **dest, char *src, int n, spoint c)
{
	
	if (dest[c.r][c.c])
	{
	ft_put_tetra(dest, src, n, c);
	if (check_nalpha(dest, n)==0)
	{
			del_tetra(dest, n);
			del_tetra(dest, n-1);
			while(dest[c.r][c.c]!)
			c.c--
			n++;
			ft_put_tetra(dest, src, n+1, c);
			//ft_put_tetra(dest, src, n, c);
			//n++;
			recursive_put_tetra(dest, src, n, c);
	}
	n++;
	}
return;
}

static char **short_solve(char *src, int m, int n, spoint c)
{
char	**dest;
dest = ft_map(m, m, '.');
	while (dest[c.r])
	{
		while(dest[c.r][c.c])
		{
			if (dest[c.r][c.c] == '.' && (n <= tetra_num(src) - 1))
			{
				recursive_put_tetra(dest, src, n, c);
				n++;
			}

			c.c++;
		}
		c.c = 0;
		c.r++;
	}

if (check_alpha(dest, src)==0)
	{
	n = 0;
	c.r = 0;
	c.c = 0;
	dest = short_solve(src, m, n, c);
	}
	
	return(dest);
}
	
char	**ft_solve(char *src)
{
	spoint	c;
	int n;
	int m;	
	char	**dest;

	m = ft_sqrt(tetra_num(src)*4);
	n = 0;
	c.r = 0;
	c.c = 0;
	dest = short_solve(src, m, n, c);
return(dest);
}
*/