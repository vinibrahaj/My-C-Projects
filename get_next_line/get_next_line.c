/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrahaj <ervin.brahaj@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:09:57 by ebrahaj           #+#    #+#             */
/*   Updated: 2025/11/18 17:14:30 by ebrahaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	read_to_buffer(int fd, char **leftovers, char *buffer)
{
	char	*tmp_array;
	int		bytes;

	ft_bzero(buffer, BUFFER_SIZE + 1);
	bytes = read(fd, buffer, BUFFER_SIZE);
	if (bytes < 0 || buffer == NULL)
	{
		free(*leftovers);
		*leftovers = NULL;
		return (-1);
	}
	if (bytes == 0)
		return (bytes);
	tmp_array = ft_strjoin(*leftovers, buffer);
	free(*leftovers);
	*leftovers = tmp_array;
	return (bytes);
}

static void	remove_result(char **leftovers)
{
	char	*newline;
	char	*tmp_array;
	size_t	i;
	size_t	j;

	newline = ft_strchr(*leftovers, '\n');
	if (!newline)
	{
		free(*leftovers);
		*leftovers = NULL;
		return ;
	}
	tmp_array = malloc((ft_strlen(newline)) * sizeof(char));
	i = 0;
	j = ft_strlen(*leftovers) - ft_strlen(newline) + 1;
	while (j < ft_strlen(*leftovers))
		tmp_array[i++] = (*leftovers)[j++];
	tmp_array[i] = '\0';
	free(*leftovers);
	*leftovers = tmp_array;
	if (**leftovers == 0)
	{
		free(*leftovers);
		*leftovers = NULL;
	}
}

static void	get_result(char **leftovers, char **result)
{
	char	*newline;
	size_t	len;
	size_t	i;

	newline = ft_strchr(*leftovers, '\n');
	len = ft_strlen(*leftovers) - ft_strlen(newline) + 2;
	*result = (char *)malloc(len * sizeof(char));
	if (!result)
		return ;
	i = 0;
	while (i < len - 1)
	{
		(*result)[i] = (*leftovers)[i];
		i++;
	}
	(*result)[i] = '\0';
}

char	*get_next_line(int fd)
{
	static char		*leftovers;
	char			*result;
	char			*buffer;
	int				bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc ((BUFFER_SIZE + 1) * sizeof(char));
	bytes = 1;
	while (ft_strchr(leftovers, '\n') == NULL && bytes > 0)
		bytes = read_to_buffer(fd, &leftovers, buffer);
	free (buffer);
	if (bytes == -1)
		return (NULL);
	if (ft_strlen(leftovers) == 0)
		return (NULL);
	get_result(&leftovers, &result);
	remove_result(&leftovers);
	return (result);
}
