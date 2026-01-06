/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:25:42 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/14 09:25:42 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t length)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (length > 0)
	{
		*p = (unsigned char)c;
		p++;
		length--;
	}
	return (ptr);
}

/* for testing :
 
int	main()
{
	char str[] = "Hello 42 students";
	ft_memset (str, '0', 5);
	printf("%s", str);
}*/
