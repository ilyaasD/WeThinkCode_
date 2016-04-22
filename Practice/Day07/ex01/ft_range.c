/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 11:32:06 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/19 11:50:13 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*rv;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	rv = (int*)malloc(sizeof(*rv) * (max - min));
	while (min < max)
	{
		rv[i] = min;
		min++;
		i++;
	}
	return (rv);
}

int main()
{
	int min;
	int max;
	int i;
	int *range;

	min = 40;
	max = 42;
	i = 0;
	range = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d", range[i]);
		i++;
	}
	return (0);

}
