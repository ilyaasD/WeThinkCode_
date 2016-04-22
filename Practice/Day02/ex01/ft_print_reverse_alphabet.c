/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 13:34:09 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/02 13:37:26 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	int i;

	i = 'z';
	while(i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
}

int main()
{
	ft_print_reverse_alphabet();
	return(0);
}
