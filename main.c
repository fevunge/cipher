#include <stdio.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>

int	main(void)
{
	char *input;

	puts("cipher@v0.1");
    puts("Press Ctrl+c to Exit\n");
	while (1)
	{
		input = readline("@cipher:: ");
		add_history(input);
		input[strlen(input) - 1] = 0;
		if (!strcmp(input, "exit"))
			break;
	}
	return (0);
}
