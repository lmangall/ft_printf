/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:38:20 by lmangall          #+#    #+#             */
/*   Updated: 2023/01/10 13:40:31 by lmangall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	count;

	count = 0;
	if (n == 0)
		count += ft_putchar_fd('0', fd);
	if (n == -2147483648)
		count += ft_putstr_fd("-2147483648", fd);
	if (n < 0 && n != -2147483648)
	{
		count += ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n <= 9 && n > 0)
		count += ft_putchar_fd(n + 48, fd);
	else if (n > 0)
	{
		count += ft_putnbr_fd(n / 10, fd);
		count += ft_putchar_fd(n % 10 + 48, fd);
	}
	return (count);
}
