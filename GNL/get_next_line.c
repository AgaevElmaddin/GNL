#include "get_next_line.h"

int			free_str_after_n(char *str_after_n)
{
	free(str_after_n);
	str_after_n = NULL;
	return (0);
}

void		fill_line(char **line, char *buff)
{
	char *str_before_n;
	char *tmp1;

	str_before_n = ft_new_strchr(buff, '\n');
	tmp1 = *line;
	*line = ft_strjoin(*line, str_before_n);
	free(tmp1);
	free(str_before_n);
}

void		fill_line_second(char **line, char *buff)
{
	char *tmp1;

	tmp1 = *line;
	*line = ft_strjoin(*line, buff);
	free(tmp1);
}

char		*ft_several_n(char **str_after_n, char **line)
{
	char *tmp;

	tmp = NULL;
	if (*str_after_n)
	{
		if ((tmp = ft_mod_strchr((*str_after_n), '\n')))
		{
			*line = ft_new_strchr(*str_after_n, '\n');
			free(*str_after_n);
			*str_after_n = tmp;
		}
		else
			*line = ft_strdup(*str_after_n);
	}
	else
		*line = ft_strdup("");
	return (tmp);
}

int			get_next_line(int fd, char **line)
{
	char		*buff;
	int			read_letter;
	static char	*str_after_n;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE <= 0 || (read(fd, NULL, 0) == -1) || !line ||
		!(buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	tmp = ft_several_n(&str_after_n, line);
	while (!tmp && (read_letter = read(fd, buff, BUFFER_SIZE)))
	{
		buff[read_letter] = '\0';
		free(str_after_n);
		if ((str_after_n = ft_mod_strchr(buff, '\n')))
		{
			fill_line(line, buff);
			break ;
		}
		else
			fill_line_second(line, buff);
	}
	free(buff);
	if (!tmp && !read_letter)
		return (free_str_after_n(str_after_n));
	return (1);
}
