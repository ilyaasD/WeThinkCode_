/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 16:20:57 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/04 16:25:43 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int c;
    
    c = 0;
    c = *a;
    *a = *b;
    *b = c;
}

void ft_putnbr(int n);

int main()
{
    int a;
    int b;
    
    a = 5;
    b = 10;
    
	printf("Value of a: %d\n", a);
	printf("Value of b: %d\n", b);
	ft_swap(&a, &b);
	printf("Value of *a: %d\n", a);
	printf("Value of *b: %d\n", b);
	return(0);
}
