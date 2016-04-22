/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 15:51:10 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/04 16:07:10 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
    int a;
    
    int *nbr1; //pointer 1
    (nbr1) = &a;
    
    int **nbr2; //pointer 2
    (nbr2) = &nbr1;
    
    int ***nbr3; //pointer 3
    (nbr3) = &nbr2;
    
    int ****nbr4; //pointer 4
    (nbr4) = &nbr3;
    
    int *****nbr5; //pointer 5
    (nbr5) = &nbr4;
    
    int ******nbr6; //pointer 6
    (nbr6) = &nbr5;
    
    int *******nbr7; //pointer 7
    (nbr7) = &nbr6;
    
    int ********nbr8; //pointer 8
    (nbr8) = &nbr7;
    
    int *********nbr9; //pointer 9
    (nbr9) = &nbr8;
    
    ft_ultimate_ft(nbr9);
	printf("%d\n", a);
	return(0);
}


