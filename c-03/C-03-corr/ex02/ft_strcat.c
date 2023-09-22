/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:06:06 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/21 01:44:10 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main() {
    char d[10] = "bom dia, ";
    char s[10] = "tudo bem?";

   // ft_strcat(d, s);
	printf("%s\n", ft_strcat(d, s));
	int i = 0;
	while (d[i] != '\0')
		i++;
	if (d[i] == '\0')
		printf("terminou.");
    return (0);
}*/
