/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:23:01 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/21 21:28:30 by vsouza-d         ###   ########.fr       */
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
	n = i - 1;
	while (n < i && n > 0)
	{
		ft_putchar(argv[n]);
		write(1, "\n", 1);
		n--;
	}
}
