/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:18:27 by iaratang          #+#    #+#             */
/*   Updated: 2025/05/03 18:18:50 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '0')
	{
		if (!(s1[i] == s2[i]))
		{
			if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else
				return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	int res;
//	char str1[] = "abC";
//	char str2[] = "abc";
//
//	res = ft_strcmp(str1, str2);
//	printf("%d", res);
//	return 1;
//}
