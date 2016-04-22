/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 13:56:04 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/02 14:52:53 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int c;
	int d;
	int e;

	c = 0;
	d = 1;
	e = 2;
	while(c	<= 9)
	{	
		d = c + 1;
		while(d <= 9)
		{	
			e = d + 1;
			while(e <= 9)
			{
				ft_putchar(c + '0');
				ft_putchar(d + '0');
				ft_putchar(e + '0');
				if(!(e == 9 && d == 8 && c == 7))
				{
					write(1, ", ", 2);	
				}
				e++;	
			}
			d++;
		}
		c++;	
	}
	write(1, "\n", 1);
}

int		main()
{
	ft_print_comb();
	return(0);
}
