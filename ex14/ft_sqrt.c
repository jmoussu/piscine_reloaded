/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:04:10 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/06 19:33:22 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_sqrt(int nb)
{
	int c;

	c = 1;
	while (c * c <= nb)
	{
		if (c * c == nb)
			return (c);
		c += 1;
	}
	return (0);
}
