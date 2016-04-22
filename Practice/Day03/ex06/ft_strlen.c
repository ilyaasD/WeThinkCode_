/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 09:31:12 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/05 09:31:14 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

int main()
{
    ft_putnbr(ft_strlen("hello world!!"));
    return(0);
}

