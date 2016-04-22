/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idocrat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/10 11:44:46 by idocrat           #+#    #+#             */
/*   Updated: 2016/04/11 14:19:25 by idocrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		isavailable(int puzzle[][9], int row, int col, int num)
{
	int	rowstart = (row / 3) * 3;
	int	colstart = (col / 3) * 3;
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		if (puzzle[row][i] == num)
			return (0);
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[rowStart + (i % 3)][colStart + (i / 3)] == num)
			return (0);
		i++;
	}
	return (1);
}

int		fillsudoku(int puzzle[][9], int row, int col)
{
	int	i;

	i = 0;
	if (row < 9 && col < 9)
	{
		if (puzzle[row][col] != 0)
		{
			if ((col + 1) < 9)
				return (fillsudoku(puzzle, row, col + 1));
			else if ((row + 1) < 9)
				return (fillsudoku(puzzle, row + 1, 0));
			else
				return (1);
		}
		else
		{
			while (i < 9)
			{
				if (isavailable(puzzle, row, col, i + 1))
				{
					puzzle[row][col] = i + 1;
					if ((col + 1) < 9)
					{
						if (fillsudoku(puzzle, row, col + 1))
							return (1);
						else
							puzzle[row][col] = 0;
					}
					else if ((row + 1) < 9)
					{
						if (fillsudoku(puzzle, row + 1, 0))
							return (1);
						else
							puzzle[row][col] = 0;
					}
					else
						return (1);
				}
				i++;
			}
		}
		return (0);
	}
	else
		return (1);
}

int		main(int argc, char **puzzle)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (i < argc)
	{
		while (puzzle[8][9])
		{
			ft_putchar(puzzle[8][9]);
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
