/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:16:25 by anareval          #+#    #+#             */
/*   Updated: 2025/01/29 17:34:54 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	str;

    str = (unsigned long) ptr;
    return (ft_putstr_fd("0x", 1) + ft_putnbrex_fd(str, 1, 0));
}
