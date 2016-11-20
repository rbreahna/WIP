/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbreahna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 20:59:32 by rbreahna          #+#    #+#             */
/*   Updated: 2016/07/27 12:53:54 by rbreahna         ###   ########.fr       */
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