/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:51:06 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/08 13:59:35 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_errorputchar(char c)
{
	write(2, &c, 1);
}

void	ft_errorputstr(char *str)
{
	while (*str != 0)
		ft_errorputchar(*str++);
}
