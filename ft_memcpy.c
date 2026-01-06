/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:27:48 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/19 16:45:16 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) dest;
	b = (unsigned char *) src;
	while (length > 0)
	{
		*a = *b;
		a++;
		b++;
		length--;
	}
	return (dest);
}
/*int main() {
    char src[] = "Hello, World!";
    char dest[20];

    // Example 1: Normal memcpy (non-overlapping)
    ft_memcpy(dest, src, 6);  // +1 to include the null terminator
    printf("After memcpy, dest = '%s'\n", dest);

	 // Example 2: Overlapping regions (undefined behavior with memcpy)
    char buffer[] = "1234567890";

    printf("Before memcpy overlapping: %s\n", buffer);
   // Overlapping copy: source and dest overlap

	ft_memcpy(buffer + 4, buffer + 2, 5);
    printf("After memcpy overlapping:  %s\n", buffer);
}*/
