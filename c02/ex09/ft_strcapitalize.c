/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:39:30 by iaratang          #+#    #+#             */
/*   Updated: 2025/04/30 20:28:34 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	ft_str_is_alpha(char str)
{
	if (!(str >= 'A' && str <= 'Z')
		&& !(str >= 'a' && str <= 'z'))
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_numeric(char str)
{
	if (!(str >= '0' && str <= '9'))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_str_is_alpha(str[i])
				&& (i == 0 || !(ft_str_is_alpha(str[i -1])
						|| ft_str_is_numeric(str[i - 1])))))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(str);
	printf("%s", str);

}*/
