/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergee <sergee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 16:04:48 by skushnir          #+#    #+#             */
/*   Updated: 2018/01/10 11:37:23 by sergee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#include <stdio.h>
#include <math.h>
#include "minilibx/mlx.h"
#include "libft/libft.h"
#include "libft/printf/ft_printf.h"

# define HIGH	1000
# define WIDTH	1000
# define UP		126
# define DOWN	125
# define LEFT	123
# define RIGHT	124
# define SIZE	20
# define ESC	53
# define PI		3.14159265358979323846

typedef struct	s_coord
{
	double	x;
	double	y;
	double	z;
	long	color;
}				t_coord;

typedef struct	s_mlx
{
	void	*mlx;
	void	*win;
	int		size;
	int		row;
	int		column;
	int		move_x;
	int		move_y;
	t_coord	start;
	t_coord	**arr;
}				t_mlx;

t_coord	**read_coordinate(int fd, char *av, t_coord **arr, t_mlx *data);
void	ft_draw_line(t_mlx *data, t_coord *p0, t_coord *p1);
void	ft_draw_fdf(t_mlx *data);
void	ft_conversion_xyz(t_mlx *data);
int		key_action(int key, t_mlx *new);
int		ft_up_down(int key, t_mlx *data);
int		ft_left_right(int key, t_mlx *data);
int		close_window(t_mlx *data);
# endif