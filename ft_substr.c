/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:20:06 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/10/20 19:22:22 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*int main()
{
    //char *str = "Hello 42 People!";
    //char *stri = ft_substr(str, 4, 7);
    //printf("%s\n", stri);
    
    char *result;

    // 1. Test input string is NULL (if (!s))
    result = ft_substr(NULL, 0, 5);
    if (result == NULL)
        printf("Test 1 (NULL input): Passed (returned NULL)\n");
    else
    {
        printf("Test 1 (NULL input): Failed (returned \"%s\")\n", result);
        free(result);
    }

    // 2. Test start >= string length (return empty string)
    char *str = "Hello";
    result = ft_substr(str, 10, 3);
    printf("Test 2 (start >= length): \"%s\"\n", result);
    free(result);

    // 3. Test len too large (start + len > s_len, len adjusted)
    result = ft_substr(str, 3, 10);
    printf("Test 3 (len too large): \"%s\"\n", result);
    free(result);

    // 4. Normal case (no if triggered for start or len)
    result = ft_substr(str, 0, 8);
    printf("Test 4 (normal case): \"%s\"\n", result);
    free(result);
}*/