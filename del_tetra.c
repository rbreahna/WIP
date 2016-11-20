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

static void	short_del(char **dest, spoint c, int n)
{
	while (dest[c.r])
	{
		while (dest[c.r][c.c])
		{
			if (dest[c.r][c.c] == 'A' + n)
				dest[c.r][c.c] = '.';
			c.c++;
		}
		c.c = 0;
		c.r++;
	}
return;
}

void		del_tetra(char **dest, int n)
{
	spoint c;
	c.r = 0;
	c.c = 0;
	short_del(dest, c, n);
}