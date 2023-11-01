#include "general_utils.h"

int test_ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	own;
	int original;

	own = ft_strncmp(s1, s2, n);
	original = strncmp(s1, s2, n);
	if (own == original || (own < 0 && original < 0) || (own > 0 && original > 0))
		return (1);
	printf("own: %d, original: %d\n", own, original);
	printf("%d", '\0');
	return (0);
}

int	main(void)
{
	char test_1_src[] = "HalLo GeInIGE MaNnEtjeS";
	char test_2_src[] = "HalLo GeInI\0@E MaNnEtjeS";
	char test_3_src[] = "HaLLo";
	char test_4_src[] = "";
	char test_5_src[] = "\0\0\0\0";
	char test_6_src[] = "\0p";
	char test_7_src[] = "\0p";

    beg_test("ft_strncmp");
	check(test_ft_strncmp(test_1_src, test_2_src, 12));
	check(test_ft_strncmp(test_2_src, test_1_src, 12));
	check(test_ft_strncmp(test_2_src, test_3_src, 5));
	check(test_ft_strncmp(test_4_src, test_4_src, 1));
	check(test_ft_strncmp(test_5_src, test_5_src, 4));
	check(test_ft_strncmp(test_6_src, test_7_src, 2));
	end_test();
	return (0);
}