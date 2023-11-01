#include "general_utils.h"

int test_ft_strchr(const char *s, int c)
{
	char *own_ptr;
	char *original_ptr;

	own_ptr = ft_strchr(s, c);
	original_ptr = strchr(s, c);
	if (own_ptr == original_ptr)
		return (1);
	printf("\nown: %s original: %s\n", own_ptr, original_ptr);
	return (0);
}

int	main(void)
{
	char test_1_src[] = "HalLo GeInIGE MaNnEtjeS";
	char test_2_src[] = "HalLo GeInI\0@E MaNnEtjeS";
	char test_3_src[] = "tripouille";

    beg_test("ft_strchr");
	check(test_ft_strchr(test_1_src, 'I'));
	check(test_ft_strchr(test_1_src, '@'));
	check(test_ft_strchr(test_1_src, '\0'));
	check(test_ft_strchr(test_2_src, '\0'));
	check(test_ft_strchr(test_2_src, '@'));
	check(test_ft_strchr(test_3_src, 't' + 256));
	end_test();
	return (0);
}