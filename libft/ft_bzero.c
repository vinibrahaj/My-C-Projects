/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:43:47 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/14 11:43:47 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t length)
{
	unsigned char	*p;

	p = s;
	while (length > 0)
	{
		*p = '\0';
		p++;
		length--;
	}
}
/*int main(void)
{
    char str[] = "Hello 42 students";
    size_t n = 10;

    printf("Before bzero: %s\n", str);

    ft_bzero(str, n);

    printf("After bzero:  ");
    for (size_t i = 0; i < sizeof(str); i++)
    {
        if (str[i] == '\0')
            printf("\\0");
        else
            printf("%c", str[i]);
    }
    printf("\n");

    return 0;
} */
