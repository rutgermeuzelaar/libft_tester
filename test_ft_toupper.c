#include "general_utils.h"

int test_ft_toupper(int c)
{
	if (ft_toupper(c) == toupper(c))
		return (1);
	return (0);
}

int	main(void)
{
	char test_1_src[] = "HalLo GeInIGE MaNnEtjeS";
	int i;

	i = ft_strlen(test_1_src);
    beg_test("ft_toupper");
	while (i > 0)
	{
		check(test_ft_toupper(test_1_src[i]));
		i--;
	}
	end_test();
	return (0);
}