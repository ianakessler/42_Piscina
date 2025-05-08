/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:39:01 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/19 19:39:11 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	rush_line(int n)
{
	int	a;
	int	b;

	a = 0;
	b = n -2;
	ft_putchar('A');
	while (a < b)
	{
		ft_putchar('B');
		a++;
	}
	if (n > 1)
	{
		ft_putchar('A');
	}
	putchar('\n');
}

void	rush_mid(int x, int y)
{
	int	qtdesp;
	int	c;
	int	t;

	qtdesp = x - 2;
	c = 0;
	while (c < y - 2)
	{
		putchar('B');
		t = 0;
		while (t < qtdesp)
		{
			putchar(' ');
			t++;
		}
		if (y != 1 && x != 1 && x > 1)
		{
			putchar('B');
		}
		putchar('\n');
		c++;
	}
}

void	rush_end_line(int n)
{
	int	a;
	int	b;

	a = 0;
	b = n -2;
	ft_putchar('C');
	while (a < b)
	{
		ft_putchar('B');
		a++;
	}
	if (n > 1)
	{
		ft_putchar('C');
	}
	putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "insira um valor valido (inteiro maior que zero)", 47);
		return ;
	}
	rush_line(x);
	rush_mid(x, y);
	if (y > 1)
	{
		rush_end_line(x);
	}
	putchar('\n');
}
