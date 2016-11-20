/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbreahna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 16:55:14 by rbreahna          #+#    #+#             */
/*   Updated: 2016/07/08 18:13:09 by rbreahna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include"./libft/libft.h"



#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_show_matrix(char **tab);
void	show_array(char *tab);
char	*create_array_from_file(int fd);
int		tetra_num(char *tab);
char	**ft_map(int rinduri, int coloane, char c);
void	turn_to_alpha(char *tab);

typedef struct coordonate_destinatie
{
int rind;
int coloana;
} point;

typedef struct coordonate
{
int r;
int c;
} spoint;

void	move_back_map_recursive(char **src);
char	**isolate(char *src, int n);
void	ft_put_tetra(char **dest, char *src, int n, spoint c);
void		del_tetra(char **dest, int n);
char	**ft_solve(char *src);
int		check_alpha(char **dest, char *src);
int		check_nalpha(char **dest, int n);

#endif
