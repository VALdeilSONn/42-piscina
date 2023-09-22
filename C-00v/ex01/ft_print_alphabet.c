/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:19:55 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/06 18:34:30 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 'a';
	while (alphabet <= 122)
	{
		write(1, &alphabet, 1);
		alphabet ++;
	}
}
/*
int	main()
{
	ft_print_alphabet();
	return	0;
}*/
