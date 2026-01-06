/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:57:35 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/19 16:45:34 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char a[] = "HelloWorld";
	char b[] = "HelloThere";

	// Compare first 5 bytes — should be equal
	printf("Compare first 5: %d (memcmp: %d)\n",
		ft_memcmp(a, b, 5), memcmp(a, b, 5));

	// Compare full 10 bytes — should not be equal
	printf("Compare 10 bytes: %d (memcmp: %d)\n",
		ft_memcmp(a, b, 10), memcmp(a, b, 10));

	// Compare with identical strings
	printf("Compare identical: %d (memcmp: %d)\n",
		ft_memcmp(a, a, 10), memcmp(a, a, 10));

	return (0);
}*/