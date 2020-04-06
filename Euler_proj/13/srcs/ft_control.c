#include "srcsft.h"
#include "libft.h"

void	ft_control(void)
{
	char	**arr;
	
	
	arr = ft_str_split(ft_str_input(), '\n');
	ft_putstr2(arr);
}
