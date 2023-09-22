/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:14:06 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/21 21:22:26 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_putchar(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	i = argc;
	(void)argc;
	n = 1;
	while (n < i)
	{
		ft_putchar(argv[n]);
		write(1, "\n", 1);
		n++;
	}
}
