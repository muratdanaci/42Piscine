#include <unistd.h>

void    ft_is_negative(int a)
{
    char    pozitif;
    char    negatif;

    pozitif = 'P';
    negatif = 'N';
    if (a >= 0)
    {
        write(1, &pozitif, 1);
    }
    else
    {
        write(1, &negatif, 1);
    }
}

int	main()
{
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-1);
}
