/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:38:53 by iaratang          #+#    #+#             */
/*   Updated: 2025/04/30 13:41:25 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	size;
	int	i;

	i = 0;
	size = n;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char src[] = "ola mundo";
	char dest[5];

	ft_strncpy(dest, src, 5);

	printf("%s", dest);

	return(1);
}*/
