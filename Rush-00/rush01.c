/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:24:22 by kcampos-          #+#    #+#             */
/*   Updated: 2023/09/03 17:29:43 by kcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	error_message(void)
{
	char	*message;

	message = "O programa nao suporta inputs nulos ou negativos";
	while (*message != '\0')
	{
		ft_putchar(*message);
		message++;
	}
	ft_putchar('\n');
}

void	write_line(int i_row, int i_coll, int x, int y )
{
	if ((i_row == 1) && (i_coll == 1) || (i_row == y) && (i_coll == x))
	{
		ft_putchar('/');
	}
	else if ((i_row == 1 && i_coll == x) || (i_row == y && i_coll == 1))
	{
		ft_putchar('\\');
	}
	else if ((i_row > 1) && (i_row < y) && (i_coll > 1) && (i_coll < x))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush(int x, int y)
{	
	int	i_row;
	int	i_coll;

	if (x < 1 || y < 1)
	{
		error_message();
	}
	i_row = 1;
	while (i_row <= y)
	{
		i_coll = 1;
		while (i_coll <= x)
		{
			write_line(i_row, i_coll, x, y);
			i_coll++;
		}
		ft_putchar('\n');
		i_row++;
	}
}
