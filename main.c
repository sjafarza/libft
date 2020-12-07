/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 06:20:19 by saray             #+#    #+#             */
/*   Updated: 2020/12/06 13:54:40 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	char	**spl;
	int	i;

	if (strcmp(argv[1], "memset") == 0)
		printf("ft_memset = %s\n", ft_memset(argv[2], (int)*argv[3], (size_t)atoi(argv[4])));
	if (strcmp(argv[1], "memcpy") == 0)
		printf("ft_memcpy = %s\n", (char *)ft_memcpy(argv[2], argv[3], (size_t)atoi(argv[4])));
	if (strcmp(argv[1], "memccpy") == 0)
		printf("ft_memccpy = %s\n", (char *)ft_memccpy(argv[2], argv[3], (int)*argv[4], (size_t)atoi(argv[5])));
	if (strcmp(argv[1], "memmove") == 0)
		printf("ft_memmove = %s\n", (char *)ft_memmove(argv[2], argv[3], (size_t)atoi(argv[4])));
	if (strcmp(argv[1], "memchr") == 0)
		printf("ft_memchr = %s\n", (char *)ft_memchr(argv[2], (int)*argv[3], (size_t)atoi(argv[4])));
	if (strcmp(argv[1], "strlen") == 0)
		printf("ft_strlen = %zu\n",ft_strlen(argv[2]));
	if (strcmp(argv[1], "memcmp") == 0)
		printf("ft_memcmp = %d\n",ft_memcmp(argv[2], argv[3], (size_t)atoi(argv[4])));
	if (strcmp(argv[1], "strchr") == 0)
		printf("ft_strchr = %s\n",ft_strchr(argv[2], (int)*argv[3]));
	if (strcmp(argv[1], "strrchr") == 0)
		printf("ft_strrchr = %s\n",ft_strchr(argv[2], (int)*argv[3]));
	if (strcmp(argv[1], "strncmp") == 0)
		printf("ft_strncmp = %d\n",ft_strncmp(argv[2], argv[3], (size_t)atoi(argv[4])));
	if (strcmp(argv[1], "strlcpy") == 0)
		printf("ft_strlcpy = %zu\n",ft_strlcpy(argv[2], argv[3], (size_t)*argv[4]));
	if (strcmp(argv[1], "strlcat") == 0)
		printf("ft_strlcat = %zu\n", ft_strlcat(argv[2], argv[3], (size_t)*argv[4]));
	if (strcmp(argv[1], "strnstr") == 0)
		printf("ft_strnstr = %s\n",ft_strnstr(argv[2], argv[3], (size_t)atoi(argv[4])));
	if (strcmp(argv[1], "atoi") == 0)
		printf("ft_atoi = %d\n", ft_atoi(argv[2]));
	if (strcmp(argv[1], "calloc") == 0)
		printf("ft_calloc = %s\n",(char *)ft_calloc((size_t)(atoi(argv[2])), (size_t)(atoi(argv[3]))));
	if (strcmp(argv[1], "strdup") == 0)
		printf("ft_strdup = %s\n",ft_strdup(argv[2]));
	if (strcmp(argv[1], "substr") == 0)
		printf("ft_substr = %s\n", (char *)ft_substr(argv[2], (unsigned int)atoi(argv[3]), (size_t)atoi(argv[4])));
	if (strcmp(argv[1], "strjoin") == 0)
		printf("ft_strjoin = %s\n",ft_strjoin(argv[2], argv[3]));
	if (strcmp(argv[1], "strtrim") == 0)
		printf("ft_strtrim = %s\n",ft_strtrim(argv[2], argv[3]));
	if (strcmp(argv[1], "split") == 0)
	{
		spl = ft_split(argv[2], (int)*argv[3]);
		i = 0;
		while (*spl[i])
		{
			printf("ft_split = %s\n",spl[i]);
			i++;
		}
	}
	if (strcmp(argv[1], "itoa") == 0)
		printf("ft_itoa = %s\n",ft_itoa(atoi(argv[2])));

return (0);
}



