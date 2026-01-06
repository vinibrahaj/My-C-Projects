/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:23:16 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/20 21:15:15 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str_joined;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (ft_strdup(""));
	str_joined = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str_joined)
		return (NULL);
	while (s1[i])
		str_joined[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str_joined[j++] = s2[i++];
	str_joined[j] = '\0';
	return (str_joined);
}
/*int main()
{
    char const *str1 = "Hello ";
    char const *str2 = "42 Students!";
    char *together = ft_strjoin(str1, str2);
    printf("%s", together);
}*/