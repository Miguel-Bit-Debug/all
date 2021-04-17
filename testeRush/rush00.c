/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midos-sa <midos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:15:21 by midos-sa          #+#    #+#             */
/*   Updated: 2021/04/04 17:11:39 by midos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);
void	ft_lines(char letra1, char letra2, int tamanho_linha);

void	rush00(int x, int y)
{
	int length_col;

	length_col = y;
	if (x == 0 || y == 0)
	{
		return ;
	}
	while (length_col >= 1)
	{
		if (length_col == y || length_col == 1)
		{
			ft_lines('o', '-', x);
		}
		else
		{
			ft_lines('|', ' ', x);
		}
		length_col -= 1;
	}
}

void	ft_lines(char letra1, char letra2, int tamanho_linha)
{
	ft_putchar(&letra1);
	while (tamanho_linha > 2)
	{
		ft_putchar(&letra2);
		tamanho_linha -= 1;
	}
	if (tamanho_linha == 2)
	{
		ft_putchar(&letra1);
	}
	ft_putchar("\n");
}
