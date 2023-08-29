/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 02:35:16 by machi             #+#    #+#             */
/*   Updated: 2023/08/25 15:24:35 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int count_ptr(unsigned int	n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 16;
	}
	return (len);
}

void	ft_putptr(unsigned int n)
{
	if (n < 16)
	{
		if (n <= 9)
			ft_print_char(n + '0');
		else
			ft_print_char(n - 10 + 'a');
	}
	else
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += ft_print_str("0x");
	if (!ptr)
		count += ft_print_char('0');
	else
	{
		ft_putstr(ptr);
		count += count_ptr(ptr);
	}
	return (count);
}
