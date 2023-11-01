#include "general_utils.h"

int test_ft_memmove_char(void *dest, const void *src, size_t n, int arr_size)
{
	char dup[arr_size];

	if (memcmp(ft_memmove(dest, src, n), memmove(dest, src, n), n) == 0)
		return 1;
	else
		return 0;
}

int	main(void)
{
	char test_1_src1[] = "Hallo geinige mannetjes";
    char test_1_src2[] = "Hallo geinige mannetjes";
    char test_2_src1[] = "JOJOOo @@!^!";
    char test_2_src2[] = "JOJOOo @@!^!";

    void *own_1 = ft_memmove(&test_1_src1[7], &test_1_src1[5], 4);
    void *original_1 = memmove(&test_1_src2[7], &test_1_src2[5], 4);
    void *own_2 = ft_memmove(test_2_src1, test_2_src1, 0);
    void *original_2 = memmove(test_2_src2, test_2_src2, 0);

    beg_test("ft_memmove");
    check(memcmp(own_1, original_1, 10) == 0);
    check(memcmp(own_2, original_2, 10) == 0);
    end_test();
    return (0);
}