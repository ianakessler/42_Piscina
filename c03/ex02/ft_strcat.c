/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:34:21 by iaratang          #+#    #+#             */
/*   Updated: 2025/05/05 19:29:17 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	size_of(char *tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	fim;

	fim = size_of(dest);
	i = 0;
	while (src[i])
	{
		dest[fim] = src[i];
		i++;
		fim++;
	}
	if (dest[fim] != '\0')
		dest[fim] = '\0';
	return (dest);
}

/*int main(void)
{
	char dest[45] = "ola, ";
	char src[] = "mundo";
	ft_strcat(dest, src);
	printf("%s", dest);
	return 1;
}*/
