/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:27:59 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/17 09:34:29 by ervin.brahaj     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t length)
{
	size_t	i;
	size_t	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	if (length > 0)
	{
		while (i < (length - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}
/*int main(void)
{
    const char *src = "Hello, world!";
    char dest[8];  // Small buffer to show truncation
    
    size_t copied = ft_strlcpy(dest, src, sizeof(dest));

    printf("Source       : \"%s\"\n", src);
    printf("Destination  : \"%s\"\n", dest);
    printf("Returned size: %zu\n", copied);

    if (copied >= sizeof(dest)) {
        printf("Note: Truncation occurred.\n");
    } else {
        printf("Note: Source fully copied.\n");
    }

    return 0;
}*/
