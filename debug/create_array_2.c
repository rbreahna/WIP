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

char	*create_array_from_file(int fd)
{
	char *tab;
	char c;
	int i;

	i = 0;
	tab = ft_strnew(1);
	while(read(fd, &c, 1))
	{
		if (c == '\n')

			{
				tab[i++] = '%';
				read(fd, &c, 1);
			}

			tab[i++] = c;
			tab = ft_strjoin(tab, ft_strnew(1));
		
	}
	return(tab);	
}

/*
ptr++;    // Pointer moves to the next int position (as if it was an array)
++ptr;    // Pointer moves to the next int position (as if it was an array)
++*ptr;   // The value of ptr is incremented
++(*ptr); // The value of ptr is incremented
++*(ptr); // The value of ptr is incremented
*ptr++;   // Pointer moves to the next int position (as if it was an array). But returns the old content
(*ptr)++; // The value of ptr is incremented
*(ptr)++; // Pointer moves to the next int position (as if it was an array). But returns the old content
*++ptr;   // Pointer moves to the next int position, and then get's accessed, with your code, segfault
*(++ptr); // Pointer moves to the next int position, and then get's accessed, with your code, segfault

*/
/*

char	*create_array_2(int fd)
{
	char *temp;
	char c;
	int i;

	i = 0;
	temp = ft_strnew(5);

	read(fd, &c, 1);
	while(c != '\n')
	{
		temp[i++] = c;
		temp = ft_strjoin(temp, ft_strnew(1));
		read(fd, &c, 1);
		if (c == '\n')
		{
			temp[i++] = '%';
			read(fd, &c, 1);
		}
		if (c == '\n')
		{
			temp[i++] = '\n';
			read(fd, &c, 1);
		}

	}
	return(temp);	
}


*/

/*

char	*create_array_2(int fd)
{
	char *tab;
	char c;
	int i;

	i = 0;
	tab = ft_strnew(5);
	while(read(fd, &c, 1))
	{
		if (c == '\n')

			{
				tab[i++] = '%';
				read(fd, &c, 1);
			}
	//	if (c == '\n')
	//		{
	//			tab[i++] = '\n';
	//			read(fd, &c, 1);
	//		}
	//
			tab[i++] = c;
			tab = ft_strjoin(tab, ft_strnew(1));
		
	}
	return(tab);	
}



*/