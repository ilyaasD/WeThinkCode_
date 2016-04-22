/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 13:38:17 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/02 13:44:50 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	int i;

	i = '0';
	while(i <= '9')
	{
		ft_putchar(i);
		i++;
	}	
	ft_putchar('\n');
}

int main()
{
	ft_print_numbers();
	return(0);
}
