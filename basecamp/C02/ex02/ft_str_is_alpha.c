/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midos-sa <midos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:43:50 by midos-sa          #+#    #+#             */
/*   Updated: 2021/04/15 23:40:30 by midos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] >= 'z') || (str[i] >= 'A') && (str[i] <= 'Z'))
			return (0);
		++i;
	}
	return (1);
}

int	main(void)
{
	char *teste = "abcdeFGH";
	char *teste2 = "2abcdeFGH";
	char *teste3 = "ab3cdeFGH";
	printf("IS_Alpha:  %d : \n", ft_str_is_alpha(teste));
	printf("IS_Alpha:  %d : \n", ft_str_is_alpha(teste2));
	printf("IS_Alpha:  %d : ", ft_str_is_alpha(teste3));
	return (0);
}