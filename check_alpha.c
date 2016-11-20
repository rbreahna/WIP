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

static int	short_check(char **dest, char *src, spoint c, spoint k)
{
	int n;

	n = 0;
while (n <= tetra_num(src) - 1)
{
	while (dest[c.r])
	{
		while (dest[c.r][c.c])
		{
			if (dest[c.r][c.c] == 'A' + n)
				k.r++;
			c.c++;
		}
		c.c = 0;
		c.r++;
	}
	if (k.r == 4)
		k.c++;
	k.r = 0;
	c.r = 0;
	n++;
}
return (k.c);
}

int		check_alpha(char **dest, char *src)
{
	spoint c;
	spoint k;
	int i;

	c.r = 0;
	c.c = 0;
	k.r = 0;
	k.c = 0;
	i = short_check(dest, src, c, k);
if ( i == tetra_num(src))
	{
		ft_putnbr(i);
		return (1);
	}
	else 
	{
		ft_putnbr(i);
		return (0);
	}
}

/*
int		check_alpha(char **dest, char *src)
{
	spoint c;
	spoint k;
	int n;

	n = 0;
	c.r = 0;
	c.c = 0;
	k.r = 0;
	k.c = 0;
while(n < tetra_num(src))
{
	while(dest[c.r])
	{
		while(dest[c.c])
		{
			if (dest[c.r][c.c++] == 'A' + n)
				k.r++;
		}
		c.c = 0;
		c.r++;
	}
	if (k.r == 4)
		k.c++;
	k.r = 0;
	n++;

}
if (k.c == tetra_num(src))
		return(1);
	else 
		return (0);
}

*/
/*

int		check_alpha(char **dest, char *src)
{
	point c;
	point k;
	int n;

	n = 0;
	c.rind = 0;
	c.coloana = 0;
	k.rind = 0;
	k.coloana = 0;
while(n < tetra_num(src))
{
	while(dest[c.rind])
	{
		while(dest[c.coloana])
		{
			if (dest[c.rind][c.coloana] == 'A' + n)
				k.rind++;
			c.coloana++;
		}
		c.coloana = 0;
		c.rind++;
	}
	if (k.rind == 4)
		k.coloana++;
	k.rind = 0;
	n++;

}
if (k.coloana == tetra_num(src))
		return(1);
	else
		return (0);
}
*/