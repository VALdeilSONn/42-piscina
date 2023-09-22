/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:07:47 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/17 18:40:07 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] >= 97 && str[y] <= 122)
		{
			str[y] = str[y] - 32;
		}
		y++;
	}
	return (str);
}
/*
int main() {
    char src[] = "teste, valdeilson";

    ft_strupcase(src);

    printf("%s\n", src);

    return 0;
}*/
