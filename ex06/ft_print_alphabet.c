/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoussu <jmoussu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:40:13 by jmoussu           #+#    #+#             */
/*   Updated: 2018/11/06 13:53:49 by jmoussu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char alfa;

	alfa = 'a';
	while (alfa != 'z' + 1)
	{
		ft_putchar(alfa);
		alfa += 1;
	}
}
