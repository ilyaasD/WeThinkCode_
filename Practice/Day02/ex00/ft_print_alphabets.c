/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabets.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 13:20:48 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/03 13:33:47 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int i;
	
	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}

int main()
{
	ft_print_alphabet();
	return(0);
}


