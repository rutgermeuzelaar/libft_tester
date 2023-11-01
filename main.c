#include "general_utils.h"

int main(void)
{
	// test_ftis(ft_isalpha, isalpha, ' ');
	test_ftis_loop(ft_isalpha, isalpha, "isalpha");
	test_ftis_loop(ft_isdigit, isdigit, "isdigit");
	test_ftis_loop(ft_isalnum, isalnum, "isalnum");
	test_ftis_loop(ft_isascii, isascii, "isascii");
	test_ftis_loop(ft_isprint, isprint, "isprint");

	// test_ft_strlen("Jojojojo");
	char *ft_strlen_1[] = {
								"Jojojojo",
								"",
								"Geinig xdddddd",
								"Hello guys! 7222115xca",
								"1234567890"};
	test_ft_strlen_loop((void**)ft_strlen_1);
	return (0);
}