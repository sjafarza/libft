/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 20:51:22 by saray             #+#    #+#             */
/*   Updated: 2020/12/05 21:31:03 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	t;

	i = 0;
	neg = +1;
	t = 0;
	while (nptr[i] && (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v' \
			|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' '))
		i++;
	while (nptr[i] && (nptr[i] == '+' || nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		t = (t * 10) + (nptr[i] - '0');
		i++;
	}
	return (t * neg);
}
