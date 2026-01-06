/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:23:42 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/22 19:26:13 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
/*char	ft_toupper_index(unsigned int i, char c)
{
	(void)i; // suppress unused parameter warning if you want
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*str = "Hello World!";
	char	*result;
	int		i;

	result = ft_strmapi(str, ft_toupper_index);
	if (!result)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	
	printf("Original: %s\n", str);
	printf("Mapped:   %s\n", result);

	free(result);
	return (0);
}*/