/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 14:23:46 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/04 15:39:56 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n);

void ft_ft(int *nbr)
{
    int i;
	
    *nbr = 42;
    i = *nbr;
}

int main()
{
    int a;
    
	ft_ft(&a);
    printf("%d\n", a);
    return(0);
}
