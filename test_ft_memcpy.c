#include "general_utils.h"

int test_ft_memcpy_char(void *dest, const void *src, size_t n, int arr_size)
{
	char dup[arr_size];

	if (memcmp(ft_memcpy(dest, src, n), memcpy(dest, src, n), n) == 0)
		return 1;
	else
		return 0;
}
int test_ft_memcpy_int(void *dest, const void *src, size_t n, int arr_size)
{
	int dup[arr_size];

	if (memcmp(ft_memcpy(dest, src, n), memcpy(dest, src, n), n) == 0)
		return 1;
	else
		return 0;
}

int	main(void)
{
	char test_1_src[] = "Hallo geinige mannetjes";
    char test_1_dest[100];
	int test_2_src[4] = {1, 5, 34, 389};
	int test_2_dest[4];

    beg_test("ft_memcpy");
	check(test_ft_memcpy_char(test_1_dest, test_1_src, 0, strlen(test_1_dest)));
    check(test_ft_memcpy_char(test_1_dest, test_1_src, 12, strlen(test_1_dest)));
	check(test_ft_memcpy_int(test_2_dest, test_2_src, 0, 4));
	check(test_ft_memcpy_int(test_2_dest, test_2_src, 3, 4));
	end_test();
	return (0);
}