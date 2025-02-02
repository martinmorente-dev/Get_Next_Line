#include "get_next_line.h"

int	main(void)
{
	int	fd = 0;

	fd = open("./text.txt", O_RDONLY);

	get_next_line(fd);

	close(fd);

	return (0);
}
