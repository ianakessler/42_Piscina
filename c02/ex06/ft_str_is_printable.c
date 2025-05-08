/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:28:11 by iaratang          #+#    #+#             */
/*   Updated: 2025/04/30 14:36:22 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char str = 1;
	int res = ft_str_is_printable(&str);

	printf("%d", res);
	return(1);
}*/
