#include "general_utils.h"

int test_ft_strrchr(const char *s, int c)
{
	char *own_ptr;
	char *original_ptr;

	own_ptr = ft_strrchr(s, c);
	original_ptr = strrchr(s, c);
	if (own_ptr == original_ptr)
		return (1);
	printf("\nown: %s original: %s\n", own_ptr, original_ptr);
	return (0);
}

int	main(void)
{
	char test_1_src[] = "HalLo GeInIGE MaNnEtjeS";
	char test_2_src[] = "HalLo GeInI\0@E MaNnEtjeS";

    beg_test("ft_strrchr");
	check(test_ft_strrchr(test_1_src, 'I'));
	check(test_ft_strrchr(test_1_src, '@'));
	check(test_ft_strrchr(test_1_src, '\0'));
	check(test_ft_strrchr(test_2_src, '\0'));
	check(test_ft_strrchr(test_2_src, '@'));
	end_test();
	return (0);
}