#include "general_utils.h"

int test_ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int own;
	int original;

	own = ft_memcmp(s1, s2, n);
	original = memcmp(s1, s2, n);
	if (own == original || (own < 0 && original < 0) || (own > 0 && original > 0))
		return (1);
	return (0);
}

int	main(void)
{
	char test_1_src[] = "HalLo GeInIGE MaNnEtjeS";
	char test_2_src[] = "HalLo GeInI\0@E MaNnEtjeS";
	char test_4_src[] = "";
	char test_5_src[] = "JojoJo";
	char test_6_src[] = "Jojojo";
	char test_7_src[] = "\0p";

    beg_test("ft_memcmp");
	check(test_ft_memcmp(test_1_src, test_2_src, 20));
	check(test_ft_memcmp(test_1_src, test_1_src, 20));
	check(test_ft_memcmp(test_4_src, test_4_src, 1));
	check(test_ft_memcmp(test_2_src, test_2_src, 24));
	check(test_ft_memcmp(test_5_src, test_6_src, 7));
	end_test();
	return (0);
}