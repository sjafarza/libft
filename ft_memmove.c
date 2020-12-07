/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:25:16 by saray             #+#    #+#             */
/*   Updated: 2020/12/05 11:15:43 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	if (!str1 || !str2)
		return (NULL);
	if (str1 > str2)
	{
		i = (int)n;
		while (i > 0)
		{
			*(char *)(str1 + i) = *(char *)(str2 + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(str1 + i) = *(char *)(str2 + i);
			i++;
		}
	}
	return (str1);
}
