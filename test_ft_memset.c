#include "general_utils.h"

int test_ft_memset_char(void *s, int c, size_t n, int arr_size)
{
	char dup[arr_size];

	if (memcmp(ft_memset(s, c, n), memset(dup, c, n), n) == 0)
		return 1;
	else
		return 0;
}

int test_ft_memset_int(void *s, int c, size_t n, int arr_size)
{
	int dup[arr_size];

	if (memcmp(ft_memset(s, c, n), memset(dup, c, n), n) == 0)
		return 1;
	else
		return 0;
}

int	main(void)
{
	char tab[100];
	int test_1[4] = {1, 5, 34, 389};

	beg_test("ft_memset");
	check(test_ft_memset_char(tab, 'A', 3, 100));
	check(test_ft_memset_char(tab, '@', 32, 100));
	check(test_ft_memset_char(tab, ' ', 100, 100));
	check(test_ft_memset_int(test_1, '5', 3, 4));
	end_test();
	return (0);
}	