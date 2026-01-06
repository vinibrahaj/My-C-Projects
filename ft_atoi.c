/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:59:20 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/19 16:40:53 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == 9 || c == 10 || c == 11
		|| c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
/*int main(void)
{
    printf("Test 1: \"%s\" -> %d\n", "1234", ft_atoi("1234"));
    printf("Test 2: \"%s\" -> %d\n", "-5678", ft_atoi("-5678"));
    printf("Test 3: \"%s\" -> %d\n", "   +42", ft_atoi("   +42"));
    printf("Test 4: \"%s\" -> %d\n", "   -42", ft_atoi("   -42"));
    printf("Test 5: \"%s\" -> %d\n", "  2147483647", ft_atoi("  2147483647"));
    printf("Test 6: \"%s\" -> %d\n", "-2147483648", ft_atoi("-2147483648")); 
    printf("Test 7: \"%s\" -> %d\n", "abc123", ft_atoi("abc123"));
    printf("Test 8: \"%s\" -> %d\n", "12abc34", ft_atoi("12abc34"));
    printf("Test 9: \"%s\" -> %d\n", "", ft_atoi(""));
    printf("Test 10: \"%s\" -> %d\n", "  +0", ft_atoi("  +0"));

	return (0);
}*/