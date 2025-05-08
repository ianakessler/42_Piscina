/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:38:27 by iaratang          #+#    #+#             */
/*   Updated: 2025/04/27 10:44:28 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		i++;
		c++;
	}
	return (c);
}

/*int	main(void)
{
	char str[] = "     ";
	int res = ft_strlen(str);
	printf("%d", res);
	return(0);
}*/
