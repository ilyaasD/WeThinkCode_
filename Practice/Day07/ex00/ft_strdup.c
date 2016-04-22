/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 11:12:49 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/19 11:30:41 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void ft_putstr(char *str);

char	*ft_strdup(char *src)
{
	int	i;
	int	src_size;
	char	*new_str;

	i = 0;
	src_size = 0;
	while(src[src_size])
	{
		src_size++;
	}
	new_str = (char*)malloc(sizeof(*new_str) * (src_size));
	if (new_str == NULL)
	{
		return(NULL);
	}
	while (i < src_size)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[src_size] = '\0';
	return(new_str);
}
