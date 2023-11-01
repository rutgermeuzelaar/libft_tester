#include "general_utils.h"

int test_ft_bzero_char(void *s, size_t n, int arr_size)
{
	char dup[arr_size];

    ft_bzero(s, n);
    bzero(dup, n);
	if (memcmp(s, dup, n) == 0)
		return 1;
	else
		return 0;
}

int test_ft_bzero_int(void *s, size_t n, int arr_size)
{
	int dup[arr_size];

    ft_bzero(s, n);
    bzero(dup, n);
	if (memcmp(s, dup, n) == 0)
		return 1;
	else
		return 0;
}

int	main(void)
{
	char tab[100];
	int test_1[4] = {1, 5, 34, 389};

	beg_test("ft_bzero");
    check(test_ft_bzero_char(tab, 2, 100));
    check(test_ft_bzero_char(tab, 100, 100));
    check(test_ft_bzero_char(tab, 6, 100));
    check(test_ft_bzero_char(tab, 0, 100));
    check(test_ft_bzero_int(tab, 4, 4));
    check(test_ft_bzero_int(tab, 0, 4));
    check(test_ft_bzero_int(tab, 1, 4));
	end_test();
	return (0);
}	