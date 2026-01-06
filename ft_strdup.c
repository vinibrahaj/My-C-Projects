/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:59:46 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/19 17:15:58 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*int	main(void)
{
	char	*original = "Hello, world!";
	char	*copy;

	copy = ft_strdup(original);
	if (!copy)
	{
		printf("ft_strdup failed\n");
		return (1);
	}
	printf("Original: %s\n", original);
	printf("Copy: %s\n", copy);
	free(copy);
	return (0);
}*/