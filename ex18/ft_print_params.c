/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:34:00 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/07 10:54:16 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != 0)
		ft_putchar(*str++);
}

int		main(int argc, char **argv)
{
	int c;

	c = 1;
	if (argc <= 1)
		return (0);
	while (argv[c] != 0)
	{
		ft_putstr(argv[c++]);
		ft_putchar('\n');
	}
}
