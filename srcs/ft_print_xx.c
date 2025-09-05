/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 20:07:01 by elise             #+#    #+#             */
/*   Updated: 2025/09/05 16:49:50 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(unsigned int n, int fd, char *base)
{
	char	c;
	int		base_len;

	base_len = ft_strlen(base);
	if (n >= base_len)
		ft_putnbr_base(n / base_len, fd, base);
	c = base[n % base_len];
	ft_putchar_fd(c, fd);
}

int	ft_nbrlen(unsigned int n, int base_len)
{
	int	len;

	len = 1;
	while (n >= (unsigned int)base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

int	ft_print_xx(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	ft_putnbr_base(n, 1, "0123456789ABCDEF");
	return (ft_nbrlen(n, 16));
}
