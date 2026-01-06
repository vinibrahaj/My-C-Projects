/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:19:49 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/22 18:46:16 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

static int	ft_found(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_found(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_found(s1[end - 1], set))
		end--;
	len = end - start;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
