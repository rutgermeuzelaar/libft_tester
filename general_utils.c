#include "general_utils.h"

int global_counter = 1;

// general
int nullter_arr_len(void **arr)
{
	int i;
	
	i = 0;
	while (arr[i] != 0)
	{
		i++;
	}
	return i;
}

void check(int succes)
{
	if (succes)
		printf("\x1b[32m%d.OK\x1b[0m ", global_counter);
	else
		printf("\x1b[31m%d.KO\x1b[0m ", global_counter);
	global_counter++;
}

void beg_test(char *function_name)
{
	if (strcmp(function_name, "ft_atoi") == 0)
		printf("%s\t\t: ", function_name);
	else
		printf("%s\t: ", function_name);
}

void end_test(void)
{
	printf("\n");
	global_counter = 1;
}