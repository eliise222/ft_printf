/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elise <elise@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 17:52:21 by elise             #+#    #+#             */
/*   Updated: 2025/09/05 17:52:40 by elise            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
