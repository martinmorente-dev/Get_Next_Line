#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*string;

	fd = open("./text.txt",O_RDONLY);
	string = get_next_line(fd);

	while( (string = get_next_line(fd)) != NULL)
	{
		printf("%s",string);
	}
	
	return(0);
}
