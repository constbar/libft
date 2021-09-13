#include "libft.h"
#include <stdio.h>

int main() {

	char a = 'a';
	printf("ft_toupper: \'a\' to \'%c\'\n", ft_toupper(a));

	char *str = "hola todos";
	char *new_str = ft_strdup(str);
	printf("ft_strdup: new_str is %s\n", new_str);

	char *cmp_str = "to compare";
	int is_same = ft_strncmp(cmp_str, new_str, 4);
	printf("ft_strncmp: first 3 leters are equal? %d\n", !is_same);

	free(new_str);
	return 0;
}