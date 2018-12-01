/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:21:48 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/07 15:27:43 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *src)
{
	int c;

	c = 0;
	while (src[c] != 0)
		c++;
	return (c);
}

char	*ft_strdup(char *src)
{
	int		c;
	char	*dst;

	c = 0;
	if (!(dst = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	while (src[c] != 0)
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = 0;
	return (dst);
}
