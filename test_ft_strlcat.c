#include "general_utils.h"

int test_ft_strlcat(char *dst, const char *src, size_t size, int arr_size)
{
	char dup[arr_size];
	int src_len_check;
	int memcmp_check;
	int own_return_int;
	int original_return_int;

	memcpy(dup, dst, arr_size);
	src_len_check = 0;
	memcmp_check = 0;
	own_return_int = ft_strlcat(dst, src, size);
	original_return_int = strlcat(dup, src, size);
	// printf("own: %s, original: %s\n", dst, dup);
	if (own_return_int == original_return_int)
		src_len_check++;
	if (!(memcmp(dst, dup, size)))
		memcmp_check++;
	return src_len_check && memcmp_check;
}

int	main(void)
{
	char test_1[] = "Hallo geinige mannetjes\0\0\0\0\0";
    char test_2[] = "JOJOOo @@!^!";
	char test_3[] = "Abracadabra";
	char test_4[] = "_-_-_-_";
	char test_5[] = "";

    beg_test("ft_strlcat");
    check(test_ft_strlcat(test_1, test_2, 6, 24));
	check(test_ft_strlcat(test_1, test_2, 29, 29));
	check(test_ft_strlcat(test_3, test_3, 0, 12));
	check(test_ft_strlcat(test_4, test_3, 8, 12));
	check(test_ft_strlcat(test_4, test_5, 1, 8));
    end_test();
    return (0);
}