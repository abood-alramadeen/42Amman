#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	rad_exp;

	rad_exp = 1;
	if (nb > 0)
	{
		while (rad_exp * rad_exp <= nb)
		{
			if (rad_exp * rad_exp == nb)
				return (rad_exp);
			if (rad_exp > 46340)
				return (0);
			rad_exp++;
		}
	}
	return (0);
}
