#ifndef BRAINFUCK_H
# define BRAINFUCK_H
# include "libft.h"
# include <fcntl.h>
# include <stdbool.h>

typedef enum
{
	NONE,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE
}t_color;

typedef	enum
{
	OK,
	ERROR,
	USAGE
}t_parse_return;

typedef	struct
{
	t_color	color;
	bool	d;
	size_t	length;
	int		fd;
}t_args;

void	colored(char *str, t_color color);
t_args	get_args(int ac, char **av);
void	brainfuck(char *ptr, t_args args);

#endif
