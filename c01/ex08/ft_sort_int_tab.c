/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:26:08 by iaratang          #+#    #+#             */
/*   Updated: 2025/04/28 15:13:04 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	swap;

	swap = 1;
	i = 0;
	while (swap)
	{
		swap = 0;
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = 1;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
		}
	}
}
int	main(void)
{
	int tab[] = {5, 1, 10, 7, 4, 2};

	printf("antes: ");
	int i = 0;
        while(i < 6)
        {
                printf(" ");
                printf("%d", tab[i]);
                i++;
        }

	ft_sort_int_tab(tab, 6);

	
	printf("Depois: ");
	i = 0;
	while(i < 6)
	{
		printf(" ");
		printf("%d", tab[i]);
		i++;
	}
}
