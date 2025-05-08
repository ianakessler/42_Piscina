/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:43:03 by iaratang          #+#    #+#             */
/*   Updated: 2025/04/30 14:05:06 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}	
	return (1);
}

/*int	main(void)
{
	char str[] = "";
	int res = ft_str_is_alpha(str);
	printf("%d", res);

	return(0);
}*/
