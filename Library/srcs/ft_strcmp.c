/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 16:23:08 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/06 16:26:10 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	if (s1 && s2)
	{
		while (*s1 == *s2)
		{	
			if (*s1 == '\0')
			return (0);
			s1++;
			s2++;
		}
		if (*s1 > *s2)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	return(0);
}