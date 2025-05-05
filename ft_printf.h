/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:07:40 by anareval          #+#    #+#             */
/*   Updated: 2025/05/05 16:46:44 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

// Prints a formatted string to standard output (similar to printf).
int	ft_printf(char const *str, ...);

// Writes a character to a file descriptor.
int	ft_putchar_fd(char c, int fd);

// Writes a string to a file descriptor.
int	ft_putstr_fd(char *s, int fd);

// Writes an integer to a file descriptor.
int	ft_putnbr_fd(int n, int fd);

// Writes a memory address (pointer) in hexadecimal format.
int	ft_putptr(void *ptr);

// Writes a number in a specified base to a descriptor.
int	ft_putnbrex_fd(int n, int fd, int i);

// Writes an unsigned number to a file descriptor.
int	ft_putnbruns_fd(int n, int fd);

#endif
