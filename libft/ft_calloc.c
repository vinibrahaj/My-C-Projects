/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:59:34 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/26 17:17:48 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total;
	size_t			i;
	unsigned char	*tmp;

	if (size != 0 && count > (size_t)-1 / size)
		return (NULL);
	total = count * size;
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *)tmp);
}
/*int	main(void)
{
	int	*arr;
	size_t	count = 5;
	size_t	i;

	arr = (int *)ft_calloc(count, sizeof(int));
	if (!arr)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (i < count)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
