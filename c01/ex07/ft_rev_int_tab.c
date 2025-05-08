/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:47:58 by iaratang          #+#    #+#             */
/*   Updated: 2025/04/27 11:24:25 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	init;
	int	fim;
	int	val;

	init = 0;
	fim = size -1;
	while (init < fim)
	{
		val = tab[init];
		tab[init] = tab[fim];
		tab[fim] = val;
		init ++;
		fim --;
	}
}

/*int	main(void)
{
	int c[] = {20, 10, 40, 30};

	int i = 0;
	printf("Antes ");
	while(i < 4)
	{
		printf("%d", c[i]);
		printf(" ");
		i++;
	}


	printf("Depois ");
	ft_rev_int_tab(c, 4);
	i = 0;
	while(i < 4)
	{
		printf("%d", c[i]);
		printf(" ");
		i++;
	}
	
	return (0);
}*/
