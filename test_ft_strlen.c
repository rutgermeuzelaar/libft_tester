#include "general_utils.h"

int test_ft_strlen(char *s)
{
	if (ft_strlen(s) == strlen(s))
		return 1;
	else
		return 0;
}

int main(void)
{
	int i = 0;
	char *tests[] = {
					"Jojojo yoghurt!",
					"What the frick @@@ \0\0\0\0 xd",
					"",
					"1234567890",
					"\t\t\t\t\0\0\0",
					"////////",
					"AbnTata$1411$!^&@&",
					"SDF    H# W^!@@"
					};
	beg_test("ft_strlen");
	while (i < 8)
	{
		check(test_ft_strlen(tests[i]));
		i++;
	}
	end_test();
}