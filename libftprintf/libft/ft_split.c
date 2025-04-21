/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharteny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 07:51:58 by sharteny          #+#    #+#             */
/*   Updated: 2025/02/07 17:02:53 by sharteny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *str1, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (*str1)
	{
		if (*str1 != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str1 == c)
			x = 0;
		str1++;
	}
	return (count);
}

static char	*ft_str(const char *str, int start, int end)
{
	char	*bar;
	int		i;

	i = 0;
	bar = (char *)malloc(end - start + 1);
	if (!bar)
		return (NULL);
	while (start < end)
	{
		bar[i] = str[start];
		i++;
		start++;
	}
	bar[i] = '\0';
	return (bar);
}

static void	*ft_free( char **str2, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str2[i]);
		i++;
	}
	free(str2);
	return (NULL);
}

static void	ft_param(size_t *i, int *j, int *k)
{
	*i = 0;
	*j = 0;
	*k = -1;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	int		j;
	int		k;

	ft_param(&i, &j, &k);
	res = ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!res || !s)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || s[i] == '\0') && k >= 0)
		{
			res[j] = ft_str(s, k, i);
			if (!res[j])
				return (ft_free(res, j));
			k = -1;
			j++;
		}
		i++;
	}
	return (res);
}
