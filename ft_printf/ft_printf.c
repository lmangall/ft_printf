/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:20:09 by lmangall          #+#    #+#             */
/*   Updated: 2023/01/17 18:24:00 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	unsigned int	i;
	unsigned int	ret;
	va_list			conv;

	i = 0;
	ret = 0;
	va_start(conv, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			i++;
			ret += pick_n_print(conv, i, format);
		}
		else
			ret += ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(conv);
	return (ret);
}
