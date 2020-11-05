/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsuki <matsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 17:42:18 by matsuki           #+#    #+#             */
/*   Updated: 2020/10/31 23:16:16 by matsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(const char *s1)
{
	char	*ret;
	int		len;
	int		i;

	len = ft_strlen(s1);
	if (!(ret = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ret_len;
	char	*ret;
	int		i;
	int		j;

	ret_len = ft_strlen(s1);
	ret_len += ft_strlen(s2);
	if (!(ret = malloc(sizeof(char) * (ret_len + 1))))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ret[i + j] = s2[j];
		j++;
	}
	ret[i + j] = '\0';
	return (ret);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ret;

	i = 0;
	ret = ft_strlen(src);
	if (dstsize == 0)
		return (ret);
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		if (src[i] == '\0')
			return (ret);
		i++;
	}
	dst[i] = '\0';
	return (ret);
}
