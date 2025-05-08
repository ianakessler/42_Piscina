/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:05:55 by iaratang          #+#    #+#             */
/*   Updated: 2025/05/08 14:13:26 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				fim;

	fim = 0;
	while (dest[fim])
		fim++;
	i = 0;
	while (i < nb)
	{
		dest[fim + i] = src[i];
		i++;
	}
	dest[fim + i] = '\0';
	return (dest);
}

/*int main(void)
{
	char dest[45] = "ola, ";
	char src[] = "mundo";
	ft_strncat(dest, src, 5);
	printf("%s", dest);
	return 1;
}*/
