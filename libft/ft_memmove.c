/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:02:52 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/19 16:43:55 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t length)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if ((!dest || !src) && length > 0)
		return (NULL);
	if (d < s)
	{
		while (length-- > 0)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += length - 1;
		s += length - 1;
		while (length-- > 0)
		{
			*d-- = *s--;
		}
	}
	return (dest);
}

/*int main()
{
	char str[] = "Hello 42 Students!";
	ft_memmove(str, str, 18);
	printf("%s\n", str);
	char str1[] = "Hello, World!";
	ft_memmove(str1 + 7, str1, 5); // overlap: dest > src
	printf("Custom: %s\n", str1);

	char str2[] = "Hello, World!";
	ft_memmove(str2 + 7, str2, 5);
	printf("Std   : %s\n", str2);
}*/