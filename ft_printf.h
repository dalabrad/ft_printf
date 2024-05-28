/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalabrad <dalabrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:36:31 by dalabrad          #+#    #+#             */
/*   Updated: 2024/04/24 13:13:15 by dalabrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char	*str);
int		ft_putunsigned(unsigned int n);
int		ft_puthex(unsigned int n, const char format);
int		ft_putaddress(void *ptr);
int		ft_printf(const char *fmt, ...);
#endif