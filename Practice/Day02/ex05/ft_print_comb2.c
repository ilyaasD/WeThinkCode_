/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 14:59:06 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/18 12:11:35 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int a;
	int b;
	int x;
	int y;

	a = 48;
	b = 48;
	x = 48;
	y = 48;
	while(a < 58)
	{
		b = 48;
		while(b < 58)
	    	{
				x = 48;
	     		while(x < 58)
		    	{
					y = 48;
		        	while(y < 58)
			    	{	
						ft_putchar(a);
						ft_putchar(b);
						write(1, " ", 1);
						ft_putchar(x);
	            		ft_putchar(y);
						if(!(a == 57 && b == 57 && x == 57 && y == 57))
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
