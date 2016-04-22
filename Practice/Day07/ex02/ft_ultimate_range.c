/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 11:46:09 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/19 11:59:58 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_ultimate_range(int **range, int main, int max)
{
	int i;
	int *rv;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	rv = (int*)malloc(sizeof(*rv) * (max - min));
	if (rv == NULL)
	{
		return (0);
	}
	while (min < max)
	{
		rv[i] = min;
		min++;
		i++;
	}
	*range = rv;
	return (i);
}
