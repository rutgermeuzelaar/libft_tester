#include "general_utils.h"

int test_ft_strlcpy(char *dst, const char *src, size_t size, int arr_size)
{
	int src_len_check;
	int memcmp_check;

	src_len_check = 0;
	memcmp_check = 0;
	char original[arr_size];

	memcpy(original, dst, arr_size);
	if (ft_strlcpy(dst, src, size) == strlcpy(original, src, size))
		src_len_check = 1;
	if (!(memcmp(dst, original, size+1)))
		memcmp_check = 1;
	return src_len_check && memcmp_check;
}

int	main(void)
{
	char test_1[] = "Hallo geinige mannetjes";
    char test_2[] = "JOJOOo @@!^!";
	char test_3[] = "Abracadabra";
	char test_4[] = "_-_-_-_";
	char test_5[] = "";
	char test_6[] = "Hallo";
	char test_7[] = "Fluit";
	char test_8[] = "Geinige mannen";
	char test_9[] = "Lekker met de hondjes";


    beg_test("ft_strlcpy");
    check(test_ft_strlcpy(test_1, test_2, 6, 24));
	check(test_ft_strlcpy(test_3, test_3, 0, 12));
	check(test_ft_strlcpy(test_4, test_3, 8, 12));
	check(test_ft_strlcpy(test_4, test_5, 1, 8));
	check(test_ft_strlcpy(test_6, test_7, 0, 6));
	check(test_ft_strlcpy(test_8, test_9, 0, 15));
    end_test();
    return (0);
}