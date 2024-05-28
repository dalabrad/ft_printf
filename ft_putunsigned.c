/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalabrad <dalabrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:27:54 by dalabrad          #+#    #+#             */
/*   Updated: 2024/04/23 10:45:20 by dalabrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int		len;

	len = 0;
	if (n < 10)
		len += ft_putchar('0' + n);
	else
	{
		len += ft_putunsigned(n / 10);
		len += ft_putunsigned(n % 10);
	}
	return (len);
}
