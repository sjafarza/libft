/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:39:52 by saray             #+#    #+#             */
/*   Updated: 2020/12/06 17:31:33 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

static void	ft_rev(char *s)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(s);
	i = 0;
	while (i < (len / 2))
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		i++;
	}
}

char		*ft_itoa(int n)
{
	char	*s;
	int		neg;
	size_t	len;

	neg = (n < 0);
	if (!(s = ft_calloc(11 + neg, sizeof(*s))))
		return (NULL);
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
	ft_rev(s);
	return (s);
}
