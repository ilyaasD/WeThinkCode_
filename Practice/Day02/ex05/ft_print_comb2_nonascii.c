/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:59:06 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/18 12:08:49 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int n)
{
    if(n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if(n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
    {
        ft_putchar(n + '0');
    }
}

void ft_print_comb2(void)
{
	int a;
	int b;
	int x;
	int y;

	a = 0;
	b = 0;
	x = 0;
	y = 0;
	while(a < 10)
	{
		b = 0;
		while(b < 10)
	    	{
				x = 0;
	     		while(x < 10)
		    	{
					y = 0;
		        	while(y < 10)
			    	{	
						ft_putchar(a);
						ft_putchar(b);
						write(1, " ", 1);
						ft_putchar(x);
	            		ft_putchar(y);
						if(!(a == 9 && b == 9 && x == 9 && y == 9))
						{
							write(1, ", ", 2);
						}
	            	y++;
	        		}
	        	x++;
				}
        	b++;
	    	}
	 	a++;
	}
	ft_putchar('\n');	
}

int		main()
{
	ft_print_comb2();
	return(0);
}
