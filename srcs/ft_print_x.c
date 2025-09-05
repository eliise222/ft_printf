/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 19:29:41 by elise             #+#    #+#             */
/*   Updated: 2025/09/05 16:46:33 by elise            ###   ########.fr       */
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

int	ft_print_x(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	ft_putnbr_base(n, 1, "0123456789abcdef");
	return (ft_nbrlen(n, 16));
}
