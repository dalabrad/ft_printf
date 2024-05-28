/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalabrad <dalabrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:23:28 by dalabrad          #+#    #+#             */
/*   Updated: 2024/04/23 10:46:29 by dalabrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char	*str)
{
	int	len;

	if (!str)
		return (ft_putstr("(null)"));
	len = 0;
	while (*str != '\0')
	{
		len += ft_putchar(*str);
		str++;
	}
	return (len);
}
