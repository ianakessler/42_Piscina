/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:35:45 by iaratang          #+#    #+#             */
/*   Updated: 2025/05/06 13:49:23 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	int res;
//	char str2[] = "carro";
//	char str1[] = "carro";
//
//	res = ft_strncmp(str1, str2, 9);
//	printf("%d", res);
//	return 1;
//
//}
