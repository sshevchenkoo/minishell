#include "../includes/minishell.h"

int	ft_lentchr(char *str, char end)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\0' && str[i] != end)
		i++;
	return (i);
}

void	ft_strcopy(char *s1, char *s2, int start, int end)
{
	int	a;

	a = 0;
	while (start < end)
	{
		s1[a] = s2[start];
		a++;
		start++;
	}
	s1[a] = '\0';
}

int ft_count_digit(int digit)
{
    int c;

    c = 0;
    if (!digit)
        return (1);
    while (digit)
    {
        digit = digit / 10;
        c++;
    }
    return (c);
}

void    free_env_var(char ***src)
{
    int i;

    i = 0;
    while (src[i])
    {
        free(src[i][0]);
        free(src[i][1]);
        free(src[i]);
        i++;
    }
    free(src);
}

void    free_array(char **src)
{
    int i;

    i = 0;
    while (src[i])
    {
        free(src[i]);
        i++;
    }
    free(src);
}