/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 15:43:19 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/20 17:28:48 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# define BUFFER_SIZE 5000000
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

typedef	struct		s_map
{
	char			square;
	char			obstacle;
	char			empty;
	unsigned int	square_size;
	unsigned int	square_index;
	unsigned int	width;
	unsigned int	height;
	unsigned int	*tab;
	char			*str;
	unsigned int	size;
}					t_map;

void				ft_putchar(char c);
void				ft_putnbr(int i);
void				ft_putstr(char *str);
unsigned int		get_width(char *str);
int					ft_strlen(char *str);
int					ft_atoi(char *str);
unsigned int		get_height(char *str);
char				*ft_strcat(char *dest, char *src);
int					is_in_square(unsigned int index, t_map *map);

int					mapping(t_map *map);
int					prepare(t_map *map);
int					verify_map(t_map *map);
int					display_map(t_map *map);

int					read_file(char *path, t_map *map, int in);
int					open_file(char *path);
#endif
