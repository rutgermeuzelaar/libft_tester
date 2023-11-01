#include "general_utils.h"

int test_ftis(int (*own)(int), int (*original)(int), int c)
{
	if ((own(c) == original(c)) || (own(c) != 0 && original(c) != 0))
		return 1;
	else
		return 0;
}

int test_ftis_loop(int (*own)(int), int (*original)(int))
{
	int range;
	int i;
	int test_counter;

	range = 255;
	i = 0;
	test_counter = 0;
	while (i < 255)
	{
		test_counter += test_ftis(own, original, i);
		i++;
	}
	if (test_counter == range)
		return 1;
	else
		return 0;
}

int main(void)
{
	beg_test("ft_isalpha");
	check(test_ftis_loop(ft_isalpha, isalpha));
	end_test();

	beg_test("ft_isdigit");
	check(test_ftis_loop(ft_isdigit, isdigit));
	end_test();

	beg_test("ft_isalnum");
	check(test_ftis_loop(ft_isalnum, isalnum));
	end_test();

	beg_test("ft_isascii");
	check(test_ftis_loop(ft_isascii, isascii));
	end_test();

	beg_test("ft_isprint");
	check(test_ftis_loop(ft_isprint, isprint));
	end_test();
	return (0);
}