#include "general_utils.h"

int test_ft_atoi(const char *nptr)
{
	int own;
	int original;

	own = ft_atoi(nptr);
	original = atoi(nptr);
	if (own == original)
		return (1);
	printf("own: %d, original: %d\n", own, original);
	return (0);
}

int	main(void)
{
	char test_1_src[] = "-2147483648";
	char test_2_src[] = "2147483647";
	char test_3_src[] = "01010101010";
	char test_4_src[] = "100000000000000000000000";
	char test_5_src[] = "";
	char test_6_src[] = "-+15161616";
	char test_7_src[] = "+000151515";
	char test_8_src[] = "-100000000000000000000000";
	char test_9_src[] = "+-15161616";
	char test_10_src[] = "-@@@@@@";
	char test_11_src[] = "-";
	char test_12_src[] = "-434agaha";
	char test_13_src[] = "     -434agaha";
	char test_14_src[] = "     - 434agaha";
	char test_15_src[] = "     -    4 3 4 agaha";
	char test_16_src[] = "     +434agaha";

    beg_test("ft_atoi");
	check(test_ft_atoi(test_1_src));
	check(test_ft_atoi(test_2_src));
	check(test_ft_atoi(test_3_src));
	check(test_ft_atoi(test_4_src));
	check(test_ft_atoi(test_5_src));
	check(test_ft_atoi(test_6_src));
	check(test_ft_atoi(test_7_src));
	check(test_ft_atoi(test_8_src));
	check(test_ft_atoi(test_9_src));
	check(test_ft_atoi(test_10_src));
	check(test_ft_atoi(test_11_src));
	check(test_ft_atoi(test_12_src));
	check(test_ft_atoi(test_13_src));
	check(test_ft_atoi(test_14_src));
	check(test_ft_atoi(test_15_src));
	check(test_ft_atoi(test_16_src));
	end_test();
	return (0);
}