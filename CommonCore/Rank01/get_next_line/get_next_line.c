/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiribei <luiribei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 18:29:32 by luiribei          #+#    #+#             */
/*   Updated: 2024/06/14 20:03:06 by luiribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_clean(char *current_line, char *read_content)
{
	int	pos;
	int	i;

	pos = ft_is_new_line(current_line);
	if (pos != -1)
		current_line[pos + 1] = '\0';
	i = 0;
	pos = ft_is_new_line(read_content);
	if (pos != -1)
	{
		pos++;
		while (read_content[pos + 1])
		{
			read_content[i] = read_content[pos + 1];
			i++;
		}
	}
	while (read_content[i])
	{
		read_content[i] = '\0';
		i++;
	}
	return (current_line);
}

char	*get_next_line(int	fd)
{
	static char	read_content[BUFFER_SIZE + 1];
	char	*current_line;
	int		read_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	current_line = NULL;
	while (ft_is_new_line(current_line) == -1)
	{
		if (read_content[0] == '\0')
		{
			read_bytes = read(fd, read_content, BUFFER_SIZE);
			if (read_bytes == 0)
				return (current_line);
			else if (read_bytes < 0)
			{
				if (current_line)
					free(current_line);
				return (NULL);
			}
		}
		current_line = ft_strjoin(current_line, read_content);
		ft_clean (current_line, read_content);
	}
	return (current_line);
}
/* int	main ()
{
	int	fd;
	char *line;
	int	line_count = 0;

	fd = open("file.txt", O_RDONLY | O_CREAT);
	if (fd < 0)
	{
		perror("Error opening file");
		return (EXIT_FAILURE);
	}

	// Read lines until NULL is returned (end of file or error)
	while ((line = get_next_line(fd)) != NULL)
	{
		// Output the line with a counter
		printf("Line %d; %s\n", ++line_count, line);
		free(line); // Free the line once is used
	}

	// Close the file descriptor
	close(fd);
	return (EXIT_SUCCESS);
}*/