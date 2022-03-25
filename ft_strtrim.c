#include "libft.h"

static int	char_in_set(char const c, char const *set)
{
	while (*set)
		if (*(set++) == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	while (s1[start] && char_in_set(s1[start], set))
		start++;
	if (!s1[start])
		return (ft_strndup("", 0));
	end = start;
	while (s1[end])
		end++;

	end--;
	while ((start < end) && char_in_set(s1[end], set))
		end--;
	if (start == end)
		return (ft_strndup("", 0));
	return (ft_substr(s1, start, end - start));
}

/*
int	main(int argc, char *argv[])
{
	char	*tstr;

	if (argc > 2)
	{
		tstr = ft_strtrim(argv[1], argv[2]);
		ft_putstr("init str, trimset : ");
		ft_putstr(argv[1]);
		ft_putstr(", ");
		ft_putstr(argv[2]);
		ft_putstr("\n");
		ft_putstr("trimed str : ");
		ft_putstr(tstr);
	}
	return (0);
}
*/
