/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:37:35 by iaratang          #+#    #+#             */
/*   Updated: 2025/05/07 11:57:18 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;
	unsigned int	size_dest;

	size_src = 0;
	size_dest = 0;
	while (dest[size_dest] && size_dest < size)
		size_dest++;
	while (src[size_src])
		size_src++;
	if (size_dest == size)
		return (size_dest + size);
	i = 0;
	while (src[i] && (size_dest + i + 1) < size)
	{		
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}

/*int main() {
	char dest[15] = "Ola, ";
	char src[] = "Mundo";
	
	int res = ft_strlcat(dest, src, 7);
	printf("%d\n", res);
	printf("%s", dest);


	return 0;
}*/
