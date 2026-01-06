/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:57:15 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/19 16:55:38 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	uc;
	size_t			i;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    char str[] = "Hello, world!";
    char *std_result = memchr(str, 'o', 13);
    char *ft_result = ft_memchr(str, 'o', 13);

    printf("Standard memchr found: %s\n", std_result);
    printf("ft_memchr found      : %s\n", ft_result);

    return 0;
}*/