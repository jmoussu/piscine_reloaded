/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:00:48 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/08 16:01:13 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int c;
	int size;
	int *tab;

	size = max - min;
	c = 0;
	if (min >= max)
		return (NULL);
	if (!(tab = (int*)malloc(sizeof(int) * size)))
		return (NULL);
	while (min < max)
	{
		tab[c++] = min;
		min++;
	}
	return (tab);
}
