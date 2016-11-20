
static void	ft_put_tetra(char **dest, char **src, point c)
{

	int	i;
	int	j;
	int x;
	//ft_modul(i, c.rind);
	//ft_modul(j, c.coloana);
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
				//c.coloana++;
			}
			j++;
			c.coloana++;
			
		}
		j = 0;
		c.coloana = x;
		i++;
		//if (src[i][j]>= 'A' && src[i][j] <= 'Z') 
			c.rind++;
	}
return;
}



















/*
static	char	*move_back(char *src)
{
		char	*tab;
		int		i;

	tab = ft_strnew(ft_strlen(src));
	i = 0;
	while (src[i])
	{
		tab[i] = src[i + 1];

		i++;
	}
	tab[i] = '\0';
	return (tab);
}
*/

/*
int main()
{
	//char tab[2][20];
	//ft_memset(tab, '1', sizeof(tab));
	//tab[0] = "asfafa";
	//tab[1] = "sgsgsgs";
	
	//ft_strcpy(tab[1], "abcde");
	//ft_strcpy(tab[2], "fghij");
char *names[6]={
						"apple",
						"orange",
						"banana",
						"mango",
						"grapes",
					};



	ft_show_matrix(names);
	return(0);
}
*/















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