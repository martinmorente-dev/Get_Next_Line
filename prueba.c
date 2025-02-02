#include "get_next_line.h"
#include <unistd.h>

int	main(void)
{
	int	fd = 0;
	char *line = "a";
	int i = 0;

	fd = open("./text.txt", O_RDONLY);


	line = get_next_line(fd);

	close(fd);

	while(line[i])
	{
		write(1, &line[i], 1);
		i++;
	}

	return (0);
}
