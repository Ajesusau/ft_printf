/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrex_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 20:14:57 by anareval          #+#    #+#             */
/*   Updated: 2025/01/29 17:40:09 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrex_fd(int n, int fd, int i)
{
	long	nb;
	int		cont;
	char	c;

	cont = 1;
	nb = (unsigned int)n;
	if (i == 1)
		c = 55;
	else
		c = 87;
	if (nb >= 16)
		cont += ft_putnbrex_fd(nb / 16, fd, i);
	if (nb % 16 < 10)
		ft_putchar_fd(nb % 16 + '0', fd);
	else
		ft_putchar_fd(nb % 16 + c, fd);
	return (cont);
}
