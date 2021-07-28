/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joferrei <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:49:48 by joferrei          #+#    #+#             */
/*   Updated: 2021/07/10 15:09:02 by joferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_line(char a, char b, char c, int size)
{
	int	cpt;

	cpt = 2;
	if (size > 0)
	{
		ft_putchar(a);
		if (size > 2)
		{
			while (cpt++ < size)
			{
				ft_putchar(b);
			}
		}
		if (size >= 2)
		{
			ft_putchar(c);
		}
		write(1, "\n", 1);
	}
}

void	rush(int x, int y)
{
	int	cpt;

	cpt = 2;
	if (y > 0)
	{
		ft_print_line('A', 'B', 'A', x);
		if (y > 2)
		{	
			while (cpt++ < y)
			{
				ft_print_line('B', ' ', 'B', x);
			}
		}
		if (y >= 2)
		{
			ft_print_line('C', 'B', 'C', x);
		}
	}
}

int	main(void)
{
	ft_putchar('\n');
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	rush(0, 4);
	ft_putchar('\n');
	rush(4, 0);
	return (0);
}
