/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 16:46:31 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/05 08:58:45 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;
    
    div = *a / *b;
    mod = *a % *b;

	*a = div;
	*b = mod;

}

int main()
{
    int a;
	int b;

	a = 5;
	b = 2;

	printf("%d", a);
	printf("%d", b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
    return(0);
}
