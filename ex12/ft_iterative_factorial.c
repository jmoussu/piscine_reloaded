/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:05:38 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/06 18:36:41 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int c;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	if (nb >= 13)
		return (0);
	c = nb;
	while (c > 1)
	{
		c = c - 1;
		nb *= c;
	}
	return (nb);
}
