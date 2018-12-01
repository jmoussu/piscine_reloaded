/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:57:38 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/08 16:55:34 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != 0)
	{
		ft_putchar(str[a]);
		a++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char *save;

	save = *a;
	*a = *b;
	*b = save;
}

int		main(int argc, char **argv)
{
	int c1;
	int c2;

	c1 = 1;
	c2 = 1;
	while (c1 < argc)
	{
		while (c2 < argc)
		{
			if (ft_strcmp(argv[c1], argv[c2]) > 0)
				ft_swap(&argv[c1], &argv[c2]);
			c2++;
		}
		c1++;
		c2 = c1;
		c2++;
	}
	c1 = 1;
	while (argv[c1] != 0)
	{
		ft_putstr(argv[c1]);
		ft_putchar('\n');
		c1++;
	}
	return (0);
}
