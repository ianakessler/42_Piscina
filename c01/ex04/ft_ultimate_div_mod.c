/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaratang <iaratang@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:48:40 by iaratang          #+#    #+#             */
/*   Updated: 2025/04/27 10:24:29 by iaratang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ca;
	int	cb;

	ca = *a;
	cb = *b;
	*a = ca / cb;
	*b = ca % cb;
}

/*int	main(void)
{
	int a = 10, b =5;

	ft_ultimate_div_mod(&a, &b);
	printf("%d", b);
}*/
