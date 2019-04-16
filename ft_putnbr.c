/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgigi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:59:20 by lgigi             #+#    #+#             */
/*   Updated: 2019/04/03 15:04:35 by lgigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (n < 0 && n != -2147483648)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	if (n != -2147483648)
		ft_putchar(n % 10 + '0');
}
