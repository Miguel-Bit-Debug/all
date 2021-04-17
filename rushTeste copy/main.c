/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midos-sa <midos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:56:20 by midos-sa          #+#    #+#             */
/*   Updated: 2021/04/12 16:49:11 by midos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "rush.h"

int	main(int argc, char *argv[])
{
	t_skyscrapers	*puzzle;

	if (argc != 2)
	{
		ft_error();
		return (1);
	}
	puzzle = ft_init_state(argv[1]);
	if (puzzle == NULL)
	{
		ft_error();
		return (1);
	}
	ft_skyscrapers(puzzle, 0, 0);
	if (puzzle->solved == 0)
	{
		ft_error();
		return (1);
	}
	return (0);
}