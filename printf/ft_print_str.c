/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machi <machi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:51:17 by machi             #+#    #+#             */
/*   Updated: 2023/08/26 16:43:09 by machi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char	*str)
{
	int		count;
	char	*str_null;

	count = 0;
	str_null = "(null)";
	if (!str)
	{
		while (!str)
		{
			count += ft_print_char(*str_null);
			str_null++;
		}
	}
	else
	{
		while (*str)
		{
			count += ft_print_char(*str);
			str++;
		}
	}
	return (count);
}
