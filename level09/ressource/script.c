#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int i = 0;
	(void)ac;
	while(av[1][i])
	{
		printf("%c", av[1][i] - i);
		i++;
	}
}
