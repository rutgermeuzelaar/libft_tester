#include "general_utils.h"

int test_ft_strnstr(const char *big, const char *little, size_t len)
{
	char *own;
	char *original;

	own = ft_strnstr(big, little, len);
	original = strnstr(big, little, len);
	if (own == original)
		return (1);
	printf("own: %s, original: %s\n", own, original);
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
	char test_8_src[30] = "aaabcabcd";

    beg_test("ft_strnstr");
	check(test_ft_strnstr(test_1_src, "IGE", 24));
	check(test_ft_strnstr(test_1_src, "@", 24));
	check(test_ft_strnstr(test_2_src, "@", 24));
	check(test_ft_strnstr(test_4_src, "@", 1));
	check(test_ft_strnstr(test_5_src, "J", 24));
	check(test_ft_strnstr(test_8_src, "abcd", 9));
	end_test();
	return (0);
}