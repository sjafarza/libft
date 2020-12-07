/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 14:23:53 by saray             #+#    #+#             */
/*   Updated: 2020/12/06 14:41:56 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

void		ft_putnbr_fd(int n, int fd)
{
	char	s[13];
	int		neg;
	int		len;

	neg = 1;
	if (n < 0)
		neg *= -1;
	if (n == 0)
		s[0] = '0';
	len = 0;
	while (n != 0)
	{
		s[len++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (neg == -1)
		s[len] = '-';
	else if (len > 0)
		len--;
	while (len >= 0)
		write(fd, &s[len--], 1);
}
