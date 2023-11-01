#include "general_utils.h"

int test_ft_memchr(const void *s, int c, size_t n)
{
	void *own;
	void *original;

	own = ft_memchr(s, c , n);
	original = memchr(s, c , n);
	if (own == original)
		return (1);
	return (0);
}

int	main(void)
{
	char test_1_src[] = "HalLo GeInIGE MaNnEtjeS";
	char test_2_src[] = "HalLo GeInI\0@E MaNnEtjeS";
	char test_4_src[] = "";
	char test_5_src[] = "\0\0\0\0";
	char test_6_src[] = "\0p";
	char test_7_src[] = "\0p";

    beg_test("ft_memchr");
	check(test_ft_memchr(test_1_src, 'o', 12));
	check(test_ft_memchr(test_1_src, '\0', 12));
	check(test_ft_memchr(test_2_src, '@', 20));
	check(test_ft_memchr(test_4_src, '@', 0));
	check(test_ft_memchr(test_5_src, '\0', 4));
	check(test_ft_memchr(test_6_src, 'p', 2));
	end_test();
	return (0);
}