/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 09:48:35 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/05 09:48:36 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char    *ft_strrev(char *str)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    ft_strrev("abcdefghi");
    return(0);
}

