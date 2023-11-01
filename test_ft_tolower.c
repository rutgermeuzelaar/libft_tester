#include "general_utils.h"

int test_ft_tolower(int c)
{
	if (ft_tolower(c) == tolower(c))
		return (1);
	return (0);
}

int	main(void)
{
	char test_1_src[] = "HalLo GeInIGE MaNnEtjeS";
	int i;

	i = ft_strlen(test_1_src);
    beg_test("ft_tolower");
	while (i > 0)
	{
		check(test_ft_tolower(test_1_src[i]));
		i--;
	}
	end_test();
	return (0);
}