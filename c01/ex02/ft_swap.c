/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.b>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:13:35 by iaratang          #+#    #+#             */
/*   Updated: 2025/04/26 19:12:41 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	ca;
	int	cb;

	ca = *a;
	cb = *b;
	*a = cb;
	*b = ca;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10, b = 5;

	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return(0);
}*/
