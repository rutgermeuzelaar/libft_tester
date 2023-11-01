#ifndef GENERAL_UTILS_H
# define GENERAL_UTILS_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft.h"
#include <ctype.h>

extern int global_counter;

int nullter_arr_len(void **arr);
void check(int succes);
void beg_test(char *function_name);
void end_test(void);

#endif