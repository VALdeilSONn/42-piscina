/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:06:06 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/19 10:55:16 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d + s] = src[s];
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main() {
    char d[18] = "bom dia, ";
    char s[] = "tudo bem?";

    ft_strcat(d, s);

    printf("%s\n", d);

    return 0;
}*/
