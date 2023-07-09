/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:31:43 by alozen            #+#    #+#             */
/*   Updated: 2023/07/07 16:27:09 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	to_print(char c, va_list arg);
int	print_base(long int n, int len, char *base);
int	print_str(char *n);
int	print_chr(int n);
int	p_flag(unsigned long n);
int	ft_atoi(const char *str);

#endif
