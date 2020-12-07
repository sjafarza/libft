/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 10:32:16 by saray             #+#    #+#             */
/*   Updated: 2020/12/06 21:09:52 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**ft_alloc_spl(char const *s, char c)
{
	size_t	i;
	size_t	cw;
	char	**spl;

	i = 0;
	cw = 0;
	while (s[i])
	{
		if (s[i] == c)
			cw++;
		i++;
	}
	spl = (char **)malloc(sizeof(s) * (cw + 2));
	if (!spl)
		return (NULL);
	return (spl);
}

void				*ft_free_all(char **split, size_t t)
{
	size_t	i;

	i = 0;
	while (i < t)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static void		*ft_split_ran(char **spl, char const *s,\
		t_split_next *st, t_split_next *lt)
{
	spl[lt->length] = ft_substr(s, st->start, st->length);
	if (!spl[lt->length])
		return (ft_free_all(spl, lt->length));
	lt->length++;
	return (spl);
}

static void		*ft_spl_char(char **split, char const *s, char c)
{
	size_t			i;
	t_split_next	st;
	t_split_next	lt;

	i = 0;
	lt.length = 0;
	lt.start = 0;
	while (s[i])
	{
		if (s[i++] == c)
		{
			st.start = lt.start;
			st.length = (i - lt.start);
			if (i > lt.start && \
					!ft_split_ran(split, s, &st, &lt))
				return (NULL);
			lt.start = i + 1;
		}
	}
	st.start = lt.start;
	st.length = (i - lt.start);
	if (i > lt.start && i > 0 && !ft_split_ran(split, s, &st, &lt))
		return (NULL);
	split[lt.length] = 0;
	return (split);
}

char				**ft_split(char const *s, char c)
{
	char	**split;

	if (!(split = ft_alloc_spl(s, c)))
		return (NULL);
	if (!ft_spl_char(split, s, c))
		return (NULL);
	return (split);
}
