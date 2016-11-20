/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbreahna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 20:59:32 by rbreahna          #+#    #+#             */
/*   Updated: 2016/07/27 12:53:54 by rbreahna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fillit.h"



static char	*read_tab(int argc, char **argv)
{
int		fd;
char *tab;

fd = 0;
argc = 2;
argc++;
argc--;


		fd = open(argv[1], O_RDONLY);
		//if (fd >= 0)
		//{
			tab = create_array_from_file(fd);
			close(fd);
		//}
	//}

return(tab);
}




int		main(int argc, char **argv)
{

	char	*tab;
	char	**tab1;
	//char	**tab2;
	tab = read_tab(argc, argv);
	//tab2 = ft_strsplit(tab, '%');
	//tab1 = ft_isolate(tab, 6);
	//show_array(tab);
	//ft_show_matrix(tab2);
	//ft_show_matrix(tab1);
	//ft_putnbr(tetra_num(tab));
	//ft_putchar('\n');
	//ft_put_tetra(tab3, ft_isolate(tab, n), c);
	//ft_put_tetra(tab3, ft_isolate(tab, 6), c1);
	tab1 = ft_solve(tab);
	ft_putnbr(tetra_num(tab));
	ft_putchar('/');

	if (check_alpha(tab1, tab) == 1)
	{
		ft_putstr("all good");
		ft_putchar('\n');
}
	else 
	{
		ft_putstr("no fit");
		ft_putchar('\n');
		//ft_putnbr(check_alpha(tab1, tab));
	}

	ft_show_matrix(tab1);
	del_tetra(tab1, 0);
	ft_putchar('\n');
	ft_show_matrix(tab1);
	return (0);
}
