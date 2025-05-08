/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:34:54 by iaratang          #+#    #+#             */
/*   Updated: 2025/04/30 21:04:07 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (i == 0)
		return (i);
	while (j < size && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[size] = '\0';
	return (i);
}

int	size_of(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char str[] = "ola mundo";
	char dest[size_of(str)];

	ft_strlcpy(dest, str, size_of(str));
	printf("%s", dest);

	return(1);
}*/
