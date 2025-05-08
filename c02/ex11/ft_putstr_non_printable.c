/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 21:07:31 by iaratang          #+#    #+#             */
/*   Updated: 2025/05/01 13:56:47 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable(char c)
{
	if ((c >= 0 && c <= 31) || c == 127)
	{
		return (0);
	}
	return (1);
}

void	ft_printhex(int n)
{
	int		mod;
	int		div;
	char	*hex;

	div = n / 16;
	mod = n % 16;
	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[div], 1);
	write(1, &hex[mod], 1);
	return ;
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_printable(str[i]))
		{
			ft_printhex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}	
}

/*int	main(void)
{
	char str[] = "Oi\nv\r\roc\ne esta bem?";
	ft_putstr_non_printable(str);
	return (1);

}*/
