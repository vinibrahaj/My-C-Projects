/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:05:41 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/26 16:52:10 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char) c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}
/*int main(void)
{
    const char *s = "hello world";

    // Test 1: Character is found
    char *result = ft_strchr(s, 'o');
    if (result)
        printf("Found 'o' at position: %ld\n", result - s);
    else
        printf("'o' not found\n");

    // Test 2: Character not found
    result = ft_strchr(s, 'x');
    if (result)
        printf("Found 'x' at position: %ld\n", result - s);
    else
        printf("'x' not found\n");

    // Test 3: Search for null terminator
    result = ft_strchr(s, '\0');
    if (result)
        printf("Found null terminator at position: %ld\n", result - s);
    else
        printf("Null terminator not found\n");

    return 0;
}*/
