/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:30:16 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/19 17:18:17 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;
	char			*res;
	char			cc;

	cc = (char)c;
	res = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == cc)
			res = (char *)&str[i];
		i++;
	}
	if (str[i] == cc)
		res = (char *)&str[i];
	return (res);
}

/*int main(void)
{
    const char *s = "hello world";

    // Test 1: Character found multiple times ('l')
    char *result = ft_strrchr(s, 'l');
    if (result)
        printf("Last 'l' found at position: %ld\n", result - s);
    else
        printf("'l' not found\n");

    // Test 2: Character found once ('d')
    result = ft_strrchr(s, 'd');
    if (result)
        printf("Last 'd' found at position: %ld\n", result - s);
    else
        printf("'d' not found\n");

    // Test 3: Character not found ('x')
    result = ft_strrchr(s, 'x');
    if (result)
        printf("Last 'x' found at position: %ld\n", result - s);
    else
        printf("'x' not found\n");

    // Test 4: Search for null terminator
    result = ft_strrchr(s, '\0');
    if (result)
        printf("Null terminator found at position: %ld\n", result - s);
    else
        printf("Null terminator not found\n");

    return 0;
}*/